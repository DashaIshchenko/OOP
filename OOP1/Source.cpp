#include <iostream>
#include "fraction.h"
using namespace std;
fraction make_fraction(double F, int S) {
	fraction t;//создали временную переменную
	t.Init(F, S);//инициализировали пол€ переменной t с помощью параметров функции
	return t;//вернули значение переменной t
}

int main() {
	int j;
	cout << "Input j: ";
	cin >> j;
	//определение переменных ј и ¬
	fraction A;
	fraction B;
	A.Init(3.0, 2);//инициализаци€ переменной ј
	B.Read();//ввод полей переменных ¬
	A.Show();//вывод значений полей переменной ј
	B.Show();//вывод значений полей переменной ¬
	//вывод значени€ степени, вычисленного с помощью функции Elements()
	cout << "A.Elements(" << A.first << "," << A.second << ")=" << A.Elements(j) << endl;
	cout << "B.Elements(" << B.first << "," << B.second << ")=" << B.Elements(j) << endl;
	//указатели
	fraction* X = new fraction;//выделение пам€ти под динамическую переменную
	X->Init(2.0, 5);//инициализаци€
	X->Show();//вывод значений полей
	X->Elements (j);//вычисление степени

	cout << "X.Elements(" << X->first << "," << X->second << ")=" << X->Elements(3) << endl;
	//массивы
	fraction mas[3];//определение массива
	for (int i = 0; i < 3; i++)
		mas[i].Read();//чтение значений полей
	for (int i = 0; i < 3; i++)
		mas[i].Show(); //вывод значений полей
	for (int i = 0; i < 3; i++) {
		mas[i].Elements(2); //вычисление степени
		cout << "mas[" << i << "].Elements(" << mas[i].first << "," << mas[i].second << ")=";
		cout << mas[i].Elements(j) << endl;
	}
	//динамические масивы
	fraction* p_mas = new fraction[3];//выделение пам€ти
	for (int i = 0; i < 3; i++)
		p_mas[i].Read();//чтение значений полей
	for (int i = 0; i < 3; i++)
		p_mas[i].Show();//вывод значений полей
	for (int i = 0; i < 3; i++) {
		p_mas[i].Elements(j);//вычисление степени
		cout << "p_mas[" << i << "].Elements(" << p_mas[i].first << "," << p_mas[i].second;
		cout << ")=" << p_mas[i].Elements(2) << endl;
	}
	//вызов функции make_fraction()
	double y; int z;
	cout << "first?"; cin >> y;
	cout << "second?"; cin >> z;
	//переменна€ F формируетс€ с помощью функции make_fraction()
	fraction F = make_fraction(y, z);
	F.Show();
	return 0;
}
