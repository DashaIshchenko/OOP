#pragma once
#include <iostream>
#include <string>
using namespace std;
class wage {
	//��������
	string name;
	double salary;
	int bonus;
	
public:
	wage();//����������� ��� ����������
	wage(string, int, double);//����������� � �����������
	wage(const wage&);//����������� �����������
	~wage();//����������
	string get_name();//��������
	void set_name(string);//�����������
	double get_salary();//��������
	void set_salary(double); //�����������
	int get_bonus();//��������
	void set_bonus(int); //�����������
	void show();//�������� ���������
};