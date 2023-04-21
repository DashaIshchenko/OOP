#pragma once
#include "object.h"
#include <string>
#include <iostream>
using namespace std;
class Person : public Object
{
public:
	Person(void);
	virtual ~Person(void);
	void Show();//функция для просмотра атрибутов класса с помощью указателя
	Person(string, int);
	Person(const Person&);
	string Get_name() { return name; }
	int Get_age() { return age; }
	void Set_name(string);
	void Set_age(int);
	Person& operator=(const Person&);
	friend istream& operator>>(istream& in, Person& c);
	friend ostream& operator<<(ostream& out, const Person& c);
protected:
	string name;
	int age;
};