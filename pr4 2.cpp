
#include <iostream>
#include "windows.h"
#include <iomanip>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "\n������ x: ";
	cin >> x;
	cout << "\n�� � � ������ ���������� ������? " << boolalpha << (x >= 10 && x <= 99 && x % 2 == 0) << endl;
}
//need to add func
cout << "the change from the first dev";