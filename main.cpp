#include <iostream>
#include <clocale>
#include "std.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    int a, b;
    cout << "¬ведите 2 целых числа: ";
    cin >> a;
    cin >> b;

    cout << endl << "—умма чисел = " << a + b << endl;

    system("pause");
    return 0;
}