#include "Pair.h"
#include <iostream>
using namespace std;
void main()
{
	Pair a;//конструктор без параметров
	Pair b; //конструктор без параметров
	Pair c; //конструктор без параметров
	cout << "my a: "; cin >> a;//ввод переменной
	cout << "my b: "; cin >> b;//ввод переменной
	a = a - b;
	cout << a << endl;//вывод переменной
	cout << "a + 4 = " << a + 4 << endl; //вывод переменной
	cout << "b + 4.5 = " << b + 4.5 << endl; //вывод переменной
}