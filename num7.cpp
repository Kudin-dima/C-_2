#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c, d, f;
	cout << "¬ведите четырехзначное число:";
	cin >> f;
	a = f / 1000;
	b = (f / 100) % 10;
	c = (f / 10) % 10;
	d = f % 10;
	cout << "ab+dc= " << (a * b) + (c * d);
	return 0;
}