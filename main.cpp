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

    system("pause");
    return 0;
}