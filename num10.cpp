#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float r;
	
	cout << "������� ������ ����:";
	cin >> r;
	cout << "����� ����: " << 4 / 3 * 3.14 * pow(r, 3) << "\n";
	cout << "������� ����������� ����: " << 4 * 3.14 * pow(r, 2);
	return 0;
}