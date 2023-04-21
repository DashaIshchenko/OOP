#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;
// глобальные функции
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
	//работа с классом Person
	Person a;
	cin >> a;
	cout << a;
	Person b("Lola", 40);
	cout << b;
	a = b;
	cout << "Object was copied" << endl;
	cout << a;
	//работа с классом Student
	Student c;
	cin >> c;
	//принцип подстановки
	f1(c);//передаем объект класса Student
	a = f2();//создаем в функции объект класса Student
	cout << a;
	cin >> c;
	c.CheckGrade();
}