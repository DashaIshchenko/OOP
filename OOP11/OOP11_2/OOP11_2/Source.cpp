#include <iostream>
#include <list> 
#include "Pair.h"
using namespace std;
typedef list<Pair>List;

List make_list(int n) {
	List l;
	for (int i = 0; i < n; ++i) {
		Pair a; a.set_random();
		l.push_back(a);
	}
	return l;
}

void print(List& l) {
	for (auto it = l.begin(); it != l.end(); ++it) cout << *it << " ";
	cout << endl;
}

Pair mean(List& l) {
	Pair s;
	for (auto it = l.begin(); it != l.end(); ++it) s += *it;
	int n = l.size();
	s.set_first(s.get_first() / n);
	s.set_second(round((double)(s.get_second() / n) * 100) / 100);
	l.insert(l.end(), s);
	return s;
}

void range(List& l) {
	double one, two;

	cout << "\ninput first border: "; cin >> one;
	cout << "\ninput second border: "; cin >> two;
	if (one > two) swap(one, two);
	for (auto it = l.begin(); it != l.end();) {
		if ((*it).sum() >= one && (*it).sum() <= two) it = l.erase(it);
		else ++it;
	}
}


void add_minmax(List& l) {
	Pair maxi = l.front();
	Pair mini = l.front();
	for (auto it = l.begin(); it != l.end(); ++it) {
		if (*it > maxi) maxi = *it;
		if (*it < mini) mini = *it;
	}
	cout << "\nmin: " << mini;
	cout << "\nmax: " << maxi << endl;
	maxi += mini;
	for (auto it = l.begin(); it != l.end(); ++it) *it += maxi;
}

int main() {
	system("color F0");
	List l; int n;
	cout << "Input size: "; cin >> n;
	l = make_list(n);
	cout << "\n===insert arithmetic mean (" << mean(l) << ")===\n"; print(l);
	cout << "\n===add min and max to every element===\n"; add_minmax(l); print(l);
	cout << "\n===delete from range===\n"; range(l); print(l);
	return 0;
}