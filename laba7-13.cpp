#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "[!] ��������� ������ [+]\n\n";
    cout << "[!] �������� ������.\n\n";
    cout << "[1] �����\n";
    cout << "[2] �������\n";
    cout << "[3] �����������\n";
    cout << "[4] �������\n";
    cout << "[5] �����\n";
    cout << "[6] ����\n";
    cout << "[7] �������������\n";
    cout << "\n";
    cout << "[+] �����: ";
    short choice;
    cin >> choice;
    if (choice == 1) {
        system("cls");
        cout << "[!] �������� ��������\n";
        cout << "[+] �����: ";
        char texture;
        cin >> texture;
        system("cls");
        cout << "[!] �������� ������\n";
        cout << "[+] �����: ";
        short size;
        cin >> size;
        system("cls");
        cout << "\[!] ���������:\n\n";
        int i = 0;
        while (i < size) {
            cout << texture << endl;
            i++;
        }

    }
    else if (choice == 2) {
        system("cls");
        cout << "[!]�������� ����� ����� �������.\n\n";
        cout << "[1] �����������\n[2] ������\n\n";
        cout << "[+]�����: ";
        int type = 0;
        cin >> type;
        system("cls");
        if (type == 1) {
            cout << "[!] �������� ��������\n";
            cout << "[+] �����: ";
            string texture;
            cin >> texture;
            system("cls");
            cout << "[!]�������� ������ ��������:\n";
            cout << "[+] �����: ";
            int size;
            cin >> size;
            system("cls");
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    cout << texture << " ";
                }
                cout << endl;
            }
        }
        else if (type == 2) {
            cout << "[!] �������� ��������\n";
            cout << "[+] �����: ";
            string texture;
            cin >> texture;
            system("cls");
            cout << "[!]�������� ������ ��������.\n";
            cout << "[+] �����: ";
            int size;
            cin >> size;
            system("cls");
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                        cout << texture << " ";
                    }
                    else {
                        cout << "  ";
                    }

                }
                cout << endl;
            }

        }
        else {
            cout << "\n\n[!] ��� ������ �������� ������\n";
            cout << "[!] ���������� ��� ���\n\n";
        }
    }
    else if (choice == 3) {
        system("cls");
        cout << "[!]�������� ����� ����� �����������.\n\n";
        cout << "[1] ������\n[2] �����������\n\n";
        cout << "[+]�����: ";

        int type = 0;
        cin >> type;
        system("cls");
        if (type == 1) {
            cout << "[!]�������� ��������. \n\n" << "[+]�����: ";
            string texture;
            cin >> texture;
            system("cls");

            int size;
            cin >> size;
            system("cls");

            for (int y = 0; y < size; y++) {
                for (int x = 0; x < size; x++) {
                    if (y == size / 2 || x == size / 2 - y || x == size / 2 + y) {
                        cout << texture;
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << endl;
            }
        }
        else if (type == 2) {

            cout << "[!]�������� ��������. \n\n" << "[+]�����: ";
            string texture;
            cin >> texture;
            system("cls");

            cout << "[!]�������� ������.\n\n" << "[+]�����: ";
            int size;
            cin >> size;
            system("cls");

            for (int y = 0; y < size; y++) {
                for (int x = 0; x < size; x++) {
                    if (y == size / 2 || x == size / 2 - y || x == size / 2 + y || x >= size / 2 - y && x <= size / 2 + y && y <= size / 2) {
                        cout << texture;
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << endl;

            }

        }

        else {
            cout << "\n\n[!] ��� ������ �������� ������\n";
            cout << "[!] ���������� ��� ���\n\n";
        }
    }
    else if (choice == 4) {
        system("cls");
        cout << "[!]�������� ����� ����� �������.\n";
        cout << "[!]�������� ��������. \n\n" << "[+]�����: ";;
        string texture;
        cin >> texture;
        system("cls");
        cout << "[!]�������� ������.\n\n" << "[+]�����: ";
        int size;
        cin >> size;
        system("cls");

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i % 2 || j % 2) {
                    cout << texture << " ";
                }
                else {
                    cout << "  ";
                }

            }
        }
    }
    else if (choice == 5) {
        system("cls");
        cout << "[!]�������� ����� ����� �����.\n";
        cout << "[!]�������� ��������. \n\n" << "[+]�����: ";;
        string texture;
        cin >> texture;
        system("cls");
        cout << "[!]�������� ������.\n\n" << "[+]�����: ";
        int size;
        cin >> size;
        system("cls");

        for (int i = 0; i <= size; i++) {
            for (int j = 0; j <= size; j++) {
                if (j == i || j == size - i) {
                    cout << texture;
                }
                else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
    else if (choice == 6) {
        system("cls");
        cout << "[!]�������� ����� ����� ����.\n";
        cout << "[!]�������� ��������. \n\n" << "[+]�����: ";;
        string texture;
        cin >> texture;
        system("cls");
        cout << "[!]�������� ������.\n\n" << "[+]�����: ";
        int size;
        cin >> size;
        system("cls");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == size / 2 || j == size / 2) {
                    cout << texture << " ";
                }
                else {
                    cout << "  ";
                }

            }
            cout << endl;
        }
    }
    else if (choice == 7) {
        system("cls");
        cout << "[!]�������� ����� ����� �������������.\n\n";
        cout << "[1] �����������\n[2] ������\n\n";
        cout << "[+]�����: ";
        int type = 0;
        cin >> type;
        system("cls");
        if (type == 1) {
            cout << "[!]�������� ��������. \n\n" << "[+]�����: ";
            string texture;
            cin >> texture;
            system("cls");
            cout << endl << "[!]�������� ����� �������������� \n\n" << "[+]�����: ";
            int along;
            cin >> along;
            system("cls");
            cout << endl << "[!]�������� ������ �������������� \n\n" << "[+]�����: ";
            int ashort;
            cin >> ashort;
            system("cls");
            for (int i = 0; i < ashort; i++) {

                for (int j = 0; j < along; j++) {

                    cout << texture << " ";

                }
                cout << endl;
            }
        }
        else if (type == 2) {
            system("cls");
            cout << "[!]�������� ��������. \n\n" << "[+]�����: ";
            string texture;
            cin >> texture;
            system("cls");
            cout << endl << "[!]�������� ����� �������������� \n\n" << "[+]�����: ";
            int along;
            cin >> along;
            system("cls");
            cout << endl << "[!]�������� ����� �������������� \n\n" << "[+]�����: ";
            int ashort;
            cin >> ashort;
            system("cls");
            for (int i = 0; i < ashort; i++) {
                for (int j = 0; j < along; j++) {
                    if (i == 0 || i == ashort - 1 || j == 0 || j == along - 1) {
                        cout << texture << " ";
                    }
                    else {
                        cout << "  ";
                    }

                }
                cout << endl;
            }

        }
        else {
            cout << "\n\n[!] ��� ������ �������� ������\n";
            cout << "[!] ���������� ��� ���\n\n";
        }
        int _; cin >> _;
        return 0;
    }
}