#include <iostream>
#include <clocale>
#include "std.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    int a, b;
    cout << "������� 2 ����� �����: ";
    cin >> a;
    cin >> b;

    system("pause");
    return 0;
}