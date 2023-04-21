#include "Pair.h"
#include <iostream>
using namespace std;

Pair& Pair::operator +(const Pair& t) {
	Pair p;
	p.first = first + t.first;
	p.second = (second + t.second);
	return p;
}

void Pair::operator +=(const Pair& t) {
	first = first + t.first;
	second = second + t.second;
}

Pair& Pair::operator+(const int num) {
	first = first + num;
	return *this;
}

Pair& Pair::operator+(const double num) {
	second = second + num;
	return *this;
}

Pair& Pair::operator+=(const double num) {
	second = second + num;
	return *this;
}

bool Pair::operator>=(const Pair& t) {
	double sum1 = second + first;
	double sum2 = t.second + t.first;
	return (sum1 >= sum2);
}

bool Pair::operator>(const Pair& t) {
	double sum1 = second + first;
	double sum2 = t.second + t.first;
	return (sum1 > sum2);
}

bool Pair::operator<(const Pair& t) {
	double sum1 = second + first;
	double sum2 = t.second + t.first;
	return (sum1 < sum2);
}



void Pair::set_random() {
	first = rand()%10+1 ;
	second = round(((double)(rand())/RAND_MAX * 10 + 1)*100)/100; //до двух знаков после запятой
}

bool Pair::operator<=(const Pair& t) {
	double sum1 = second + first;
	double sum2 = t.second + t.first;
	return (sum1 <= sum2);
}

istream& operator>>(istream& in, Pair& t) {
	cout << "first: "; in >> t.first;
	cout << "second: "; in >> t.second;
	return in;
}

ostream& operator<<(ostream& out, const Pair& t) {
	return (out << t.first << ":" << t.second);
}

