#include "Student.h"
//конструктор без параметров
Student::Student(void) :Person() {
	grade = 0;
}
//дестрктор
Student::~Student(void) {}
//конструктор с параметрами
Student::Student(string M, int C,int G) :Person(M, C) {
	grade = G;
}
//конструктор копирования
Student::Student(const Student& L){
	name = L.name;
	age = L.age;
	grade = L.grade;
}
//модификатор
void Student::Set_grade(int G) {
	grade = G;
}
void Student::CheckGrade() {
	if (grade < 3) cout << "This student has bad grades..."<< endl;
}
//оперция присваивания
Student& Student::operator=(const Student& l) {
	if (&l == this)return *this;
	name = l.name;
	age = l.age;
	grade = l.grade;
	return *this;
}
//операция ввода
istream& operator>>(istream& in, Student& l) {
	cout << "\nname:"; in >> l.name;
	cout << "\nage:"; in >> l.age;
	cout << "\ngrade:"; in >> l.grade;
	return in;
}
//операция вывода
ostream& operator<<(ostream& out, const Student& l) {
	out << "\nname : " << l.name;
	out << "\nage : " << l.age;
	out << "\ngrade : " << l.grade;
	out << "\n";
	return out;
}