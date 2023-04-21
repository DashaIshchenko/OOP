#pragma once
#include "Object.h"
#include "event.h"
class Vector{
public:
	Vector(int);//конструктор с параметрами
	Vector();
	void HandleEvent(const TEvent& e);
	~Vector(void);//деструктор
	void Add();//добавление элемента в вектор
	void Del();
	void Show();
	int operator()();//размер вектора
protected:
	Object** beg;//указатель на первый элемент вектора
	int size;//размер
	int cur;//текущая позиция
};

