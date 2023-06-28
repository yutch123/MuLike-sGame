// MuLike'sGame

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <conio.h>
#include <sstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    bool quit = false; // переменная выхода
    string game_name; // название игр
    vector<string> gameList; // список игр
    vector<string>::const_iterator iter; // итератор
    int choice;
    while (!quit)
    {
        cout << "\n1 - Добавить игру в список\n" << endl;
        cout << "2 - Удалить игру\n" << endl;
        cout << "3 - Вывести список с играми\n" << endl;
        cout << "4 - Выйти\n" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nДобавьте игру в список любимых\n" << endl;
            cin >> game_name;
            cout << "\n";
            gameList.insert(gameList.begin(), game_name);
            break;
        case 2:
            cout << "Введите название игры, которую вы хотите удалить\n" << endl;
            cin >> game_name;
            iter = find(gameList.begin(), gameList.end(), game_name);
            if (iter != gameList.end())
            {
            cout << "Игра найдена\n\n";
            gameList.erase(iter);
            cout << "Игра удалена\n\n";
            }
            else 
            {
            cout << "Игра не найдена\n\n";
            }
            continue;
        case 3:
            cout << "Твои любимые игры: \n" << endl;
            for (iter = gameList.begin(); iter != gameList.end(); ++iter)
            {
                cout << *iter << endl;
            }
            continue;
        case 4:
            quit = true;
            cout << "\nВы вышли из программы" << endl;
        }
    }
    return 0;
}

