#include "Pair.h"
#include <iostream>
using namespace std;
void main()
{
	Pair a;//����������� ��� ����������
	Pair b; //����������� ��� ����������
	Pair c; //����������� ��� ����������
	cout << "my a: "; cin >> a;//���� ����������
	cout << "my b: "; cin >> b;//���� ����������
	a = a - b;
	cout << a << endl;//����� ����������
	cout << "a + 4 = " << a + 4 << endl; //����� ����������
	cout << "b + 4.5 = " << b + 4.5 << endl; //����� ����������
}