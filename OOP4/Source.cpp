#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;
// ���������� �������
void f1(Person& c){
	c.Set_name("Ivan");
	cout << "Name was changed" << endl;
	cout << c;
}
Person f2(){
	Student l("Kirill", 18, 2);
	return l;
}
void main() {
	//������ � ������� Person
	Person a;
	cin >> a;
	cout << a;
	Person b("Lola", 40);
	cout << b;
	a = b;
	cout << "Object was copied" << endl;
	cout << a;
	//������ � ������� Student
	Student c;
	cin >> c;
	//������� �����������
	f1(c);//�������� ������ ������ Student
	a = f2();//������� � ������� ������ ������ Student
	cout << a;
	cin >> c;
	c.CheckGrade();
}