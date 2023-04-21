#pragma once
class fraction{
public:
	double first;
	int second;
	void Init(double, int);//метод для инициализации полей
	void Read();//метод для чтения значений полей
	void Show();//метод для вывода значений полей
	double Elements(int);//вычисление степени
};