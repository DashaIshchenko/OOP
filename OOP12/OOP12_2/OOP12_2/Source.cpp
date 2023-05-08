#include <iostream>
#include <set>
#include "Pair.h"
using namespace std;
typedef multiset<Pair> TMS; //определяем тип для работы со словарем
typedef TMS::iterator it; //итератор

TMS make_set(int n) {
	srand(time(NULL));
	TMS m; Pair a;
	for (int i = 0; i < n; i++) {
		a.set_random();
		m.insert(a);
	}
	return m;
}

void print_TMS(TMS m) {
	int k = 1;
	for (it i = m.begin(); i != m.end(); i++) cout << k++ << " : " << *i << " " << endl;
}

Pair mean(TMS& m) {
	Pair sum;
		int n = m.size();
	for (it i = m.begin(); i != m.end(); i++) sum += (*i);
	sum.set_first(sum.get_first() / m.size());
	sum.set_second(round((double)(sum.get_second() / m.size()) * 100) / 100);
	m.insert(sum);
	return sum;
}

void add_minmax(TMS& m) {
	auto mini = m.begin();
	auto maxi = --m.end();
	cout << "min: " << *mini << endl;
	cout << "max: " << *maxi << endl;
	Pair sum;
	sum += (*mini); sum += (*maxi);
	cout << "summary = " << sum << endl;
	TMS m1;
	for (it t = m.begin(); t != m.end(); t++) {
		Pair temp = *t;
		temp += sum;
		m1.insert(temp);
	}
	m = m1;
}

void range(TMS& m) {
	double one, two;
	cout << "\ninput first border: "; cin >> one;
	cout << "\ninput second border: "; cin >> two;
	if (one > two) swap(one, two);
	it first = m.end(), last = m.end();
	for (it i = m.begin(); i != m.end(); i++) {
		if (*i > one) { first = i; one = RAND_MAX;}
		if (*i > two) { last = i; two = RAND_MAX; }
	}
	--first;
	TMS m1;
	for (Pair elem : m) {
		if (!(elem > *first && *last > elem)) {
			m1.insert(elem);
		}
	}
	m = m1;
}

int main() {
	system("color F0");
	int n;
	cout << "input size: "; cin >> n;
	TMS m = make_set(n);
	print_TMS(m);
	cout << "\n===insert arithmetic mean (" << mean(m) << ")===\n"; print_TMS(m);
	cout << "\n===add min and max to every element===\n"; add_minmax(m); print_TMS(m);
	cout << "\n===delete from range===\n"; range(m); print_TMS(m);
	return 0;
}