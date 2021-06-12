#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int r, l;
	float h;
	cout << "¬ведите радиус конуса:";
	cin >> r;
	cout << "¬ведите образующую конуса:";
	cin >> l;
	h = sqrt(pow(l, 2) - pow(r, 2));
	cout << "ѕлощадь осевого сечени€ конуса: " << ((1 / 2) * r * h);
	return 0;
}
