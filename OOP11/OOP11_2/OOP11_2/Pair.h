#pragma once
#include <iostream>
using namespace std;

class Pair {
	int first;
	double second;
public:
	Pair() { first = 0; second = 0; };
	Pair(int m, double s) { first = m; second = s; }
	Pair(const Pair& t) { first = t.first; second = t.second; }
	~Pair() {};
	int get_first() const { return first; }
	double get_second() const { return second; }
	void set_first(int m) { first = m; }
	void set_second(double s) { second = s; }
	void set_random();
	double sum() { return first + second; };
	//перегруженные операции
	Pair& operator+(const Pair&);
	void operator+=(const Pair&);
	Pair& operator+(const int);
	Pair& operator+(const double);
	Pair& operator+=(const double);
	//Pair& operator=(const Pair&);
	bool operator>=(const Pair&);
	bool operator==(const double);
	bool operator==(const Pair&);
	bool operator!=(const Pair&);
	//bool operator>(const Pair&);
	bool operator<=(const Pair&);
	bool operator<(const Pair&);
	friend bool operator<(const Pair&, const Pair&);
	friend bool operator<=(const Pair&, const Pair&);
	friend bool operator>=(const Pair&, const Pair&);
	friend bool operator>(const Pair&, const Pair&);
	friend bool operator>(const Pair&, double);
	friend bool operator>(double, const Pair&);
	//глобальные функции ввода-вывода
	friend istream& operator>>(istream& in, Pair& t);
	friend ostream& operator<<(ostream& out, const Pair& t);
};
