#include "Student.h"
//����������� ��� ����������
Student::Student(void) :Person() {
	grade = 0;
}
//���������
Student::~Student(void) {}
//����������� � �����������
Student::Student(string M, int C, int G) :Person(M, C) {
	grade = G;
}
//����������� �����������
Student::Student(const Student& L) {
	name = L.name;
	age = L.age;
	grade = L.grade;
}
//�����������
void Student::Set_grade(int G) {
	grade = G;
}
//������� ������������
Student& Student::operator=(const Student& l) {
	if (&l == this)return *this;
	name = l.name;
	age = l.age;
	grade = l.grade;
	return *this;
}
//�������� �����
istream& operator>>(istream& in, Student& l) {
	cout << "\nname:"; in >> l.name;
	cout << "\nage:"; in >> l.age;
	cout << "\ngrade:"; in >> l.grade;
	return in;
}
//�������� ������
ostream& operator<<(ostream& out, const Student& l) {
	out << "\nname : " << l.name;
	out << "\nage : " << l.age;
	out << "\ngrade : " << l.grade;
	out << "\n";
	return out;
}
void Student::Show() {
	cout << "\nName: " << name;
	cout << "\nAge: " << age;
	cout << "\nGrafe: " << grade<< endl;
}