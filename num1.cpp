#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n, b;
	cout << "������� n:";
	cin >> n;
	cout << "������� b:";
	cin >> b;
	while (n % b != 0)
	{
		++b;
	}
	cout << "��������� �����, ������� �������� �� b:" << b;
	return 0;
}
