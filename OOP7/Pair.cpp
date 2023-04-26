#include "Pair.h"
#include <iostream>
using namespace std;


Pair& Pair::operator*(const Pair& t) {
	Pair p;
	p.first = first * t.first;
	p.second = (second * t.second);
	return p;
}

Pair& Pair::operator+(const int num) {
	first = first + num;
	return *this;
}

Pair& Pair::operator+(const double num) {
	second = second + num;
	return *this;
}

istream& operator>>(istream& in, Pair& t) {
	cout << "first: "; in >> t.first;
	cout << "second: "; in >> t.second;
	return in;
}

ostream& operator<<(ostream& out, const Pair& t) {
	return (out << t.first << ":" << t.second);
}