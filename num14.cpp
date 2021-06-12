#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, h, S, P, f;
	cout << "Введите сторону основания:";
	cin >> a;
	cout << "Введите высоту пирамиды:";
	cin >> h;
	P = a * 4;//пермиметр основания
	S = a * a;//площадь основания
	f = 1 / 2 * P * h;//площадь боковой поверхности
	cout << "Площадь поверхности пирамиды:" << S + f << "\n";
	cout << "Объем пирамиды:" << (1 / 3) * S * h;
	return 0;
}