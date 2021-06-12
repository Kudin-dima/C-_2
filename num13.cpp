#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int r, h;
	float l;
	cout << "¬ведите радиус конуса:";
	cin >> r;
	cout << "¬ведите высоту конуса: ";
	cin >> h;
	l = sqrt(pow(r, 2) + pow(h, 2));
	cout << "ѕлощадь поверхности конуса:" << (3.14 * r * l) + (3.14 * pow(r, 2)) << "\n";
	cout << "ќбъем конуса:" << 1 / 3 * 3.14 * h * (pow(r, 2));
	return 0;
}