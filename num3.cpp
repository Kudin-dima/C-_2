#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c,d;
	cout << "Введите трехзначное чило:";
	cin >> d;
	a= d/ 100;
	d= d% 100;
	b= d/ 10;
	d= d %10;
	c = d;
	cout << "Сумма цифр числа:" << a + b + c << "\n";
	cout << "Произведение цифр числа:" << a * b * c;
	return 0;
}