#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int r, h;
	cout << "������� ������ ��������:";
	cin >> r;
	cout << "������� ������ ��������:";
	cin >> h;
	cout << "����� �������� :" << 3.14 * pow(r, 2) * h << "\n";
	cout << "������� ����������� ��������: " << (2 * 3.14 * r * h) + (2 * 3.14 * pow(r, 2));
	return 0;
}