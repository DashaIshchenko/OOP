#pragma once
#include "Person.h"
//класс Student наследуется от класса Car
class Student :
	public Person
{
public:
	Student(void);//конструктор без параметров
	void Show();
	~Student(void);//деструктор
	Student(string, int, int);//конструктор с параметрами
	Student(const Student&);//конструктор копирования
	int Get_grade() { return grade; }//модификатор
	string Get_subject() { return subject; }//модификатор
	void Set_grade(int);//селектор
	void Set_subject(string);//селектор
	Student& operator=(const Student&);//операция присваивания
	friend istream& operator>>(istream& in, Student& l);//операция ввода
	friend ostream& operator<<(ostream& out, const Student& l); //операция вывода
protected:
	int grade;//атрибут
	string subject;
};