#include <iostream>
#include <clocale>
#include "std.h"

using namespace std;

//��������� �������� �������

int main() {
    setlocale(LC_ALL, "rus");

    int a, b;
    cout << "������� 2 ����� �����: ";
    cin >> a;
    cin >> b;

    cout << endl << "����� ����� = " << a + b << endl;
    cout << endl << "�������� ����� = " << a - b << endl;
    cout << endl << "������� ����� = " << a / b << endl;

    system("pause");
    return 0;
}