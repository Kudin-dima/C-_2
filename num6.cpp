#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "¬ведите число a: ";
	cin >> a;
	cout << "¬ведите число b: ";
	cin >> b;
	c = a;
	a = b;
	b = c;
	cout << "„исло a: " << a << "\n";
	cout << "„исло b: " << b;
	return 0;
}

