#include <iostream>
#include <string>
using namespace std;


int main()
{
    setlocale(0, "");
    cout << "???:\n";
    const int XD = 10;
    int a[XD] = { 1,2,3,4,5,6,7,8,9,10 };
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "] ?????: " << a[i] << endl;
    }
    cout << endl;

    cout << "?????:\n";
    float b[XD] = { 3.14,15.9,6.6,3.58,9.7,93.2,3.8,4.62,6.43,3.83 };
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "] ?????: " << b[i] << endl;
    }
    cout << endl;

    cout << "??????:\n";
    string c[XD] = {
        "??????",
        "????????",
        "??",
        "?????",
        "???:",
        "?,",
        "????????",
        "-??",
        "?????",
        "????????",
    };
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "] ?????????: " << c[i] << endl;
    }
    cout << endl;

    cout << "???:\n";
    char d[XD] = {
        'N',
        'A',
        'V',
        'I',
        'W',
        'I',
        'N',
        'G',
        'G',
        'S',
    };
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "]stockholm: " << d[i] << endl;
    }
    cout << endl;

    cout << "????:\n";
    bool e[XD] = { false,false,true,false,true,false,false,true,false,false };
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "]: " << e[i] << endl;
    }
    cout << endl;

    cout << "????:\n";
    int f1[XD] = { 134,165,4463,122106,16,4123,21,563,95761,31 };
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "]: " << f1[i] << endl;
    }
    cout << endl;

    cout << "????:\n";
    int f[XD] = { 4,77,3,11,66,88,9,22,66,5 };
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "]: " << f[i] << endl;
    }
    cout << endl;

    cout << "????:\n";
    float h[XD] = { 4.23,1.353,7.041,5.541,5.347,3.759,9.351,2.589,1.36324,8.267 };
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "]: " << h[i] << endl;
    }
    cout << endl;

    return 0;
}