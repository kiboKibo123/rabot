#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "              ===����������===" << endl << endl
        << "�������� � ������ ����� �� ������ ��������� �����:"
        << endl << endl << "1-������" << endl << "2-����������" << endl <<
        "0-��������� ���������" << endl << endl << "�����: ";
    int a;
    cin >> a;
    if (a == 1) {
        cout << "������� ����� ����� ���-�� ��������� ��� �� ����������:" << endl << endl << "1-������   2-����" <<
            endl << "3-�����    4-�����" << endl << "5-������    6-������������" << endl << "7-�����     8-�����"
            << endl << "9-����     10-����"
            << endl << "11-����   12-��������"
            << endl << "13-��������"     14 - �����"
            << endl << "15-�����" << endl << endl << "�����: ";
        int b;
        cin >> b;
        switch (b) {
        case 1:
            cout << "������-Hi";
            break;
        case 2:
            cout << "����-Bye";
            break;
        case 3:
            cout << "�����-Study";
            break;
        case 4:
            cout << "�����-School";
            break;
        case 5:
            cout << "������-The bell";
            break;
        case 6:
            cout << "������������-Classmate";
            break;
        case 7:
            cout << "�����-Time";
            break;
        case 8:
            cout << "�����-Desk";
            break;
        case 9:
            cout << "����-Table";
            break;
        case 10:
            cout << "����-Mouse";
            break;
        case 11:
            cout << "����-Friend";
            break;
        case 12:
            cout << "��������-Turn";
            break;
        case 13:
            cout << "��������-Headphones";
            break;
        case 14:
            cout << "�����-Pencil case";
            break;
        case 15:
            cout << "�����-Pen;)";
            break;
        default:
            cout << endl << "������ ������� ���" << endl << "���������� ��� ���...";
            break;
        }
    }
    else if (a == 2) {
        cout << "������� ����� ����� ���-�� ��������� ��� �� �������:" << endl
            << endl << "1-Hi        2-Bye" <<
            endl << "3-Study     4-School" << endl << "5-The bell      6-Classmate"
            << endl << "7-Time     8-Desk"
            << endl << "9-Table     10-Mouse"
            << endl << "11-Friend    12-Turn"
            << endl << "13-Headphones  14-Pencil"
            << endl << "15-Pen" << endl << endl << "�����: ";
        int b;
        cin >> b;
        switch (b) {
        case 1:
            cout << "Hi-������";
            break;
        case 2:
            cout << "Bye-����";
            break;
        case 3:
            cout << "Study-�����";
            break;
        case 4:
            cout << "School-�����";
            break;
        case 5:
            cout << "The bell-������";
            break;
        case 6:
            cout << "Classmate-������������";
            break;
        case 7:
            cout << "Time-�����";
            break;
        case 8:
            cout << "Desk-�����";
            break;
        case 9:
            cout << "Table-����";
            break;
        case 10:
            cout << "Mouse-����";
            break;
        case 11:
            cout << "Friend-����";
            break;
        case 12:
            cout << "Turn-��������";
            break;
        case 13:
            cout << "Headphones-��������";
            break;
        case 14:
            cout << "Pencil-�����";
            break;
        case 15:
            cout << "Pen-�����;)";
            break;
        default:
            cout << endl << "������ ��������" << endl << "���������� ��� ���...";
            break;
        }
    }
    else if (a == 0) {
        cout << " ";
    }
    else { cout << endl << "������ �������� ���" << endl << "���������� ��� ���..."; }
    return 0;
}