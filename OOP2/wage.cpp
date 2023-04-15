#include "wage.h"
#include <iostream>
#include <string>
using namespace std;
//����������� ��� ����������
wage::wage() {
	name = "";
	bonus = 0;
	salary = 0;
	cout << "Constructor without parameters for object" << this << endl;
}
//����������� � �����������
wage::wage(string N, int K, double S) {
	name = N;
	bonus = K;
	salary = S;
	cout << "Constructor with parameters for object" << this << endl;
}
//����������� �����������
wage::wage(const wage& t) {
	name = t.name;
	bonus = t.bonus;
	salary = t.salary;

	cout << "Copying constructor for object" << this << endl;
}
//����������
wage::~wage() {
	cout << "Destructor for object" << this << endl;
}
//���������
string wage::get_name() {
	return name;
}
int wage::get_bonus() {
	return bonus;
}
double wage::get_salary() {
	return salary;
}
//������������
void wage::set_name(string N) {
	name = N;
}
void wage::set_bonus(int K) { 
	bonus = K;
}
void wage::set_salary(double S) {
	salary = S;
}
//����� ��� ��������� ���������
void wage::show() {
	cout << "name: " << name << endl;
	cout << "bonus: " << bonus << endl;
	cout << "salary: " << salary << endl;
}