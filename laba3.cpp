#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "[             �����������              ]" << endl << endl;
    cout << "[+] ��������" << endl << endl;
    cout << "[-] ���������" << endl << endl;
    cout << "[] ���������" << endl << endl;
    cout << "[/] �������" << endl << endl;
    cout << "[%] ������� ��� �������" << endl << endl;
    cout << "������� ����� a: ";
    float a;
    cin >> a;
    cout << "�������� ��������: ";
    char action;
    cin >> action;
    cout << "������� ����� b: ";
    float b;
    cin >> b;
    int a1;
    int b1;
    if (action == '+') {
        cout << a << "+" << b << "=" << a + b;
    }
    else if (action == '-') {
        cout << a << "-" << b << "=" << a - b;
    }
    else if (action == '*') {
        cout << a << "*" << b << "=" << a * b;
    }
    else if (action == '/') {
        cout << a << "/" << b << "=" << a / b;
    }
    else if (action == '%') {
        int a1 = a;
        int b1 = b;
        cout << a1 << "%" << b1 << "=" << a1 % b1;
    }
    else {
        cout << "������������ ������, ��������� �������";
    }
    return 0;
}