
#include <iostream>
#include "windows.h"
#include <iomanip>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int c = 10; //added a new variable
	int x;
	cout << "\n������ x: ";
	cin >> x;
	cout << "\n�� � � ������ ���������� ������? " << boolalpha << (x >= 10 && x <= 99 && x % 2 == 0) << endl;
}
//very important comment