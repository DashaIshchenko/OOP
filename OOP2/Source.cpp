#include "wage.h"
#include <iostream>
#include <string>
using namespace std;
//������� ��� �������� ������� ��� ����������
wage make_wage() {
	string s;
	int i;
	double d;
	cout << "Input name: ";
	cin >> s;
	cout << "Input bonus: ";

	cin >> i;
	cout << "Input salary: ";
	cin >> d;
	wage t(s, i, d);
	return t;
}
//������� ��� �������� ������� ��� ���������
void print_wage(wage t) {
	t.show();
}
void main() {
	//����������� ��� ����������
	wage t1;
	t1.show();
	//���������� � �����������
	wage t2("Ivan", 1, 15000);
	t2.show();
	//����������� �����������
	wage t3 = t2;
	t3.set_name("Kirill");
	t3.set_bonus(2);
	t3.set_salary(5000.0);
	//����������� �����������
	print_wage(t3);
	//����������� �����������
	t1 = make_wage();
	t1.show();
}