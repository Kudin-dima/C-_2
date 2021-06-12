#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int r, h;
	cout << "¬ведите радиус цилиндра:";
	cin >> r;
	cout << "¬ведите высоту цилиндра:";
	cin >> h;
	cout << "ќбъем цилиндра :" << 3.14 * pow(r, 2) * h << "\n";
	cout << "ѕлощадь поверхности цилиндра: " << (2 * 3.14 * r * h) + (2 * 3.14 * pow(r, 2));
	return 0;
}