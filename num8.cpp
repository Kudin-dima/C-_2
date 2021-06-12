#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double d, h, b, top, wall, q;
	int q_int;
	float pi = 3.14;

	cout << "dim ";
	cin >> d;
	cout << "hight ";
	cin >> h;
	cout << "s ";
	cin >> b;

	top = (pi * sqrt(d)) / 4.0;
	wall = pi * d * h;
	q = (top + wall) / b;
	q_int = q + 1;

	cout << "cup\t" << q_int;
	return 0;
}
