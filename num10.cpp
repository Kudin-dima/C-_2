#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float r;
	
	cout << "Введите радиус шара:";
	cin >> r;
	cout << "Объем шара: " << 4 / 3 * 3.14 * pow(r, 3) << "\n";
	cout << "Площадь поверхности шара: " << 4 * 3.14 * pow(r, 2);
	return 0;
}