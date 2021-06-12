#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n, b;
	cout << "¬ведите n:";
	cin >> n;
	cout << "¬ведите b:";
	cin >> b;
	while (n % b != 0)
	{
		++b;
	}
	cout << "Ѕлижайшее целое, которое делитьс€ на b:" << b;
	return 0;
}
