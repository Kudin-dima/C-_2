#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x1, y1, x2, y2, k, b;
	cout << "A(x1;y1): ";
	cin >> x1 >> y1;
	cout << "A(x2; y2) : ";
	cin >> x2 >> y2;
	k = (y1 - y2) / (x1 - x2);
	b = y2 - k * x2;
	cout << " y = " << k << "x + " << b;
	return 0;
}