#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, h, S, P, f;
	cout << "������� ������� ���������:";
	cin >> a;
	cout << "������� ������ ��������:";
	cin >> h;
	P = a * 4;//��������� ���������
	S = a * a;//������� ���������
	f = 1 / 2 * P * h;//������� ������� �����������
	cout << "������� ����������� ��������:" << S + f << "\n";
	cout << "����� ��������:" << (1 / 3) * S * h;
	return 0;
}