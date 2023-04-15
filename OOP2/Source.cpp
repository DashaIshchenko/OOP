#include "wage.h"
#include <iostream>
#include <string>
using namespace std;
//функция для возврата объекта как результата
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
//функция для передачи объекта как параметра
void print_wage(wage t) {
	t.show();
}
void main() {
	//конструктор без параметров
	wage t1;
	t1.show();
	//коструктор с параметрами
	wage t2("Ivan", 1, 15000);
	t2.show();
	//конструктор копирования
	wage t3 = t2;
	t3.set_name("Kirill");
	t3.set_bonus(2);
	t3.set_salary(5000.0);
	//конструктор копирования
	print_wage(t3);
	//конструктор копирования
	t1 = make_wage();
	t1.show();
}