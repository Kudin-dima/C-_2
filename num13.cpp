#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int r, h;
	float l;
	cout << "������� ������ ������:";
	cin >> r;
	cout << "������� ������ ������: ";
	cin >> h;
	l = sqrt(pow(r, 2) + pow(h, 2));
	cout << "������� ����������� ������:" << (3.14 * r * l) + (3.14 * pow(r, 2)) << "\n";
	cout << "����� ������:" << 1 / 3 * 3.14 * h * (pow(r, 2));
	return 0;
}