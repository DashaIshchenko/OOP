#pragma once
#include <iostream>
#include <string>
using namespace std;
class wage {
	//атрибуты
	string name;
	double salary;
	int bonus;
	
public:
	wage();//конструктор без параметров
	wage(string, int, double);//конструктор с параметрами
	wage(const wage&);//конструктор копирования
	~wage();//деструктор
	string get_name();//селектор
	void set_name(string);//модификатор
	double get_salary();//селектор
	void set_salary(double); //модификатор
	int get_bonus();//селектор
	void set_bonus(int); //модификатор
	void show();//просмотр атрибутов
};