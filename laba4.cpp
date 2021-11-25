#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "              ===Переводчик===" << endl << endl
        << "Выберите с какого языка вы хотите перевести слова:"
        << endl << endl << "1-РУСКИЙ" << endl << "2-АНГЛИЙСКИЙ" << endl <<
        "0-завершить программу" << endl << endl << "выбор: ";
    int a;
    cin >> a;
    if (a == 1) {
        cout << "Введите номер слова что-бы перевести его на Английский:" << endl << endl << "1-Привет   2-Пока" <<
            endl << "3-Учеба    4-Школа" << endl << "5-Звонок    6-Одноклассник" << endl << "7-Время     8-Парта"
            << endl << "9-Стол     10-Мышь"
            << endl << "11-Друг   12-Перемена"
            << endl << "13-Наушники"     14 - Пенал"
            << endl << "15-Ручка" << endl << endl << "выбор: ";
        int b;
        cin >> b;
        switch (b) {
        case 1:
            cout << "Привет-Hi";
            break;
        case 2:
            cout << "Пока-Bye";
            break;
        case 3:
            cout << "Учеба-Study";
            break;
        case 4:
            cout << "Школа-School";
            break;
        case 5:
            cout << "Звонок-The bell";
            break;
        case 6:
            cout << "Одноклассник-Classmate";
            break;
        case 7:
            cout << "Время-Time";
            break;
        case 8:
            cout << "Парта-Desk";
            break;
        case 9:
            cout << "Стол-Table";
            break;
        case 10:
            cout << "Мышь-Mouse";
            break;
        case 11:
            cout << "Друг-Friend";
            break;
        case 12:
            cout << "Перемена-Turn";
            break;
        case 13:
            cout << "Наушники-Headphones";
            break;
        case 14:
            cout << "Пенал-Pencil case";
            break;
        case 15:
            cout << "Ручка-Pen;)";
            break;
        default:
            cout << endl << "Такого варинта нет" << endl << "попробуйте еще раз...";
            break;
        }
    }
    else if (a == 2) {
        cout << "Введите номер слова что-бы перевести его на Русский:" << endl
            << endl << "1-Hi        2-Bye" <<
            endl << "3-Study     4-School" << endl << "5-The bell      6-Classmate"
            << endl << "7-Time     8-Desk"
            << endl << "9-Table     10-Mouse"
            << endl << "11-Friend    12-Turn"
            << endl << "13-Headphones  14-Pencil"
            << endl << "15-Pen" << endl << endl << "выбор: ";
        int b;
        cin >> b;
        switch (b) {
        case 1:
            cout << "Hi-Привет";
            break;
        case 2:
            cout << "Bye-Пока";
            break;
        case 3:
            cout << "Study-Учеба";
            break;
        case 4:
            cout << "School-Школа";
            break;
        case 5:
            cout << "The bell-Звонок";
            break;
        case 6:
            cout << "Classmate-Одноклассник";
            break;
        case 7:
            cout << "Time-Время";
            break;
        case 8:
            cout << "Desk-Парта";
            break;
        case 9:
            cout << "Table-Стол";
            break;
        case 10:
            cout << "Mouse-Мышь";
            break;
        case 11:
            cout << "Friend-Друг";
            break;
        case 12:
            cout << "Turn-Перемена";
            break;
        case 13:
            cout << "Headphones-Наушники";
            break;
        case 14:
            cout << "Pencil-Пенал";
            break;
        case 15:
            cout << "Pen-Ручка;)";
            break;
        default:
            cout << endl << "Такого варианта" << endl << "попробуйте еще раз...";
            break;
        }
    }
    else if (a == 0) {
        cout << " ";
    }
    else { cout << endl << "Такого варианта нет" << endl << "попробуйте еще раз..."; }
    return 0;
}