#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "���������� �����:" << c;
	return 0;
}