
#include <iostream>
#include "windows.h"
#include <iomanip>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int x;
	cout << "\n¬вед≥ть x: ";
	cin >> x;
	cout << "\n„и Ї х парним двозначним числом? " << boolalpha << (x >= 10 && x <= 99 && x % 2 == 0) << endl;
}
//very important comment