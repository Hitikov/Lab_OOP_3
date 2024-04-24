#include <iostream>
#include "Pair.h"
using namespace std;

int main()
{
    system("chcp 1251 > null" );
    system("cls");
    Pair a(5, 8);
    Pair b(9, 4);
    cout << "a: " << a << "b: " << b;
    cout << "Разность двух чисел" << a - b << endl;
    cout << "Сложение с целочисленной константой " << "9: " << a + 9.0 << endl;
    cout << "Сложение с вещественной константой " << "5.5: " << b + 5.5 << endl;
    return 0;
}