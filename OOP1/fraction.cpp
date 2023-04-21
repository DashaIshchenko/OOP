#include <iostream>
#include "fraction.h"
using namespace std;
//реализация метода для инициализации полей структуры
void fraction::Init(double F, int S) {
	first = F; second = S;
}
//реализация метода для чтения значений полей структуры
void fraction::Read() {
	cout << "\nfirst: "; cin >> first;
	cout << "\nsecond: "; cin >> second;
}
//реализация метода для вывода значений полей структуры
void fraction::Show() {
	cout << "\nfirst = " << first;
	cout << "\nsecond = " << second;
	cout << "\n";
}
//метод для возведения в степень
double fraction::Elements(int j) {
	return first * pow(second, j);
}