#include "Vector.h"
#include "MAGAZIN.h"
#include "event.h"
#include <iostream>
using namespace std;


void Vector::HandleEvent(const TEvent& e) {
	if (e.what == evMessage) {
		Object** p = beg;
		for (int i = 0; i < cur; i++) {
			(*p)->HandleEvent(e);//вызов метода (позднее связывание)
			p++;//передвигаем указатель на следующий объект
		}
	}
}


//деструктор
Vector::~Vector(void){
	if (beg != 0) delete[] beg;
	beg = 0;
}
//конструктор с параметрами
Vector::Vector(int n)
{
	beg = new Object * [n];
	cur = 0;
	size = n;
}
Vector::Vector(){
	beg = nullptr;
	cur = -1;
	size = 0;
}
//добавление объекта, на который указывает указатель p в вектор
void Vector::Add(){
	Object* p;
	//выбор из объектов двух возможных классов
	cout << "1.PRINT" << endl;
	cout << "2.MAGAZIN" << endl;
	int y;
	cin >> y;
	if (y == 1) {//добавление объекта класса PRINT
		PRINT* a = new (PRINT);
		a->Input();//ввод значений атрибутов
		p = a;
		if (cur < size){
			beg[cur] = p;//добавление в вектор
			cur++;
		}
	}
	else if (y == 2) { //добавление объекта класса MAGAZIN
		MAGAZIN* b = new MAGAZIN;
		b->Input();
		p = b;
		if (cur < size) {
			beg[cur] = p;
			cur++;
		}
	}
	else return;
}
//просмотр вектора

void Vector::Show(){
	if (cur == 0) cout << "Empty" << endl;
	Object** p = beg;//указатель на указатель типа Object
	for (int i = 0; i < cur; i++){
		(*p)->Show();//вызов метода Show() (позднее связывание)
		p++;//передвигаем указатель на следующий объект
	}

}
//операция, которая возвращает размер вектора
int Vector::operator ()(){return cur;}
//удаление элемента из вектора, память не освобождается!
void Vector::Del(){
	if (cur == 0)return;//пустой
	cur--;
}