#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int r, l;
	float h;
	cout << "������� ������ ������:";
	cin >> r;
	cout << "������� ���������� ������:";
	cin >> l;
	h = sqrt(pow(l, 2) - pow(r, 2));
	cout << "������� ������� ������� ������: " << ((1 / 2) * r * h);
	return 0;
}
