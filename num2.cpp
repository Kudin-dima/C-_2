#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	cout << "¬ведите первый катет: ";
	cin >> a;
	cout << "¬ведите второй катет: ";
	cin >> b;
	c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "√ипотенуза равна:" << c;
	return 0;
}