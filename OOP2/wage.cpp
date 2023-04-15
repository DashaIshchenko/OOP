#include "wage.h"
#include <iostream>
#include <string>
using namespace std;
//конструктор без параметров
wage::wage() {
	name = "";
	bonus = 0;
	salary = 0;
	cout << "Constructor without parameters for object" << this << endl;
}
//конструктор с параметрами
wage::wage(string N, int K, double S) {
	name = N;
	bonus = K;
	salary = S;
	cout << "Constructor with parameters for object" << this << endl;
}
//конструктор копирования
wage::wage(const wage& t) {
	name = t.name;
	bonus = t.bonus;
	salary = t.salary;

	cout << "Copying constructor for object" << this << endl;
}
//деструктор
wage::~wage() {
	cout << "Destructor for object" << this << endl;
}
//селекторы
string wage::get_name() {
	return name;
}
int wage::get_bonus() {
	return bonus;
}
double wage::get_salary() {
	return salary;
}
//модификаторы
void wage::set_name(string N) {
	name = N;
}
void wage::set_bonus(int K) { 
	bonus = K;
}
void wage::set_salary(double S) {
	salary = S;
}
//метод для просмотра атрибутов
void wage::show() {
	cout << "name: " << name << endl;
	cout << "bonus: " << bonus << endl;
	cout << "salary: " << salary << endl;
}