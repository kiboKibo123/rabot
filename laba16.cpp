#include <iostream>
#include <string>
using namespace std;

void clean() {
	system("cls");
}

void color() {
	system("color  12");
}

void color2() {
	system("color  4");
}

int sizeint() {
	cout << "������ INT = " << sizeof(int);
	return 0;
}

int sizechar() {
	cout << "������ CHAR = " << sizeof(char);
	return 0;
}

int sizedouble() {
	cout << "������ DOUBLE = " << sizeof(double);
	return 0;
}

int sizefloat() {
	cout << "������ FLOAT = " << sizeof(float);
	return 0;
}

int sizebool() {
	cout << "������ BOOL = " << sizeof(bool);
	return 0;
}

void message() {
	cout << "������ � �������";
}

void cube() {
	int size = 5;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << "# ";
		}
		cout << endl;
	}
	cout << endl << endl;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}

		}
		cout << endl;
	}
}

int main()
{
	setlocale(0, "");

	cout << "[!] ��������� - \"������� \" \n\n";
	cout << "[1] �������� �������\n";
	cout << "[2] ��������� ����� ����\n";
	cout << "[3] ��������� ����� ������\n";
	cout << "[4] ����� ������� ���� ������ INT\n";
	cout << "[5] ����� ������� ���� ������ CHAR\n";
	cout << "[6] ����� ������� ���� ������ DOUBLE\n";
	cout << "[7] ����� ������� ���� ������ FLOAT\n";
	cout << "[8] ����� ������� ���� ������ BOOL\n";
	cout << "[9] ����� ��������� \"������ � �������\" \n";
	cout << "[10] ����� �������� 5x5\n\n";
	cout << "[+] �����: ";
	int choise;
	cin >> choise;
	cout << endl;



	if (choise == 1) {
		clean();
		cout << "All clear";
	}
	else if (choise == 2) {
		color();
		cout << "���� ���� : Blue\n";
	}
	else if (choise == 3) {
		color2();
		cout << "���� ������: Red\n";
	}
	else if (choise == 4) {
		sizeint();
	}
	else if (choise == 5) {
		sizechar();
	}
	else if (choise == 6) {
		sizedouble();
	}
	else if (choise == 7) {
		sizefloat();
	}
	else if (choise == 8) {
		sizebool();
	}
	else if (choise == 9) {
		message();
	}
	else if (choise == 10) {
		cube();
	}
	else {
		cout << "[!] �� ������ ��������\n���������� ��� ���.";
	}



	int _; cin >> _;
	return 0;
}