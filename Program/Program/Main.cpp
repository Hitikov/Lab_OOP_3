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
    cout << "�������� ���� �����" << a - b << endl;
    cout << "�������� � ������������� ���������� " << "9: " << a + 9.0 << endl;
    cout << "�������� � ������������ ���������� " << "5.5: " << b + 5.5 << endl;
    return 0;
}