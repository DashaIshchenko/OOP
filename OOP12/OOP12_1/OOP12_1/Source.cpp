#include <iostream>
#include <set>
using namespace std;
typedef multiset<double> TMS; //определяем тип для работы со словарем
typedef TMS::iterator it; //итератор

TMS make_set(int n){
	srand(time(NULL));
	TMS m; double a;
	for (int i = 0; i < n; i++){
		a = round(((double)(rand()) / RAND_MAX * 10 + 1) * 100) / 100;
		m.insert(a);
	}
	return m;
}

void print_TMS(TMS m){
	int k = 1;
	for (it i = m.begin(); i != m.end(); i++) cout << k++ << ") " << *i << " " << endl;
}

double mean(TMS& m){
	double s = 0, n = m.size();
	for (it i = m.begin(); i != m.end(); i++) s += *i;
	s = (round(((double)(s / n) * 100) / 100));
	m.insert(s);
	return s;
}

void add_minmax(TMS& m){
	it i = m.begin();
	double cur_max = *i, cur_min = *i;
	for (; i != m.end(); i++) {
		if (cur_max < *i) cur_max = *i;
		if (cur_min > *i) cur_min = *i;
	}
	TMS m1;
	for (it t = m.begin(); t != m.end(); t++) {
		double temp = *t + cur_min + cur_max;
		m1.insert(temp);
	}
	m = m1;
}

void range(TMS& m) {
	int one, two;
	cout << "\ninput first border: "; cin >> one;
	cout << "\ninput second border: "; cin >> two;
	if (one > two) swap(one, two);
	it first = --m.lower_bound(one);
	it last = m.upper_bound(two);
	TMS m1;
	for (double elem : m) {
		if (!(elem > *first && elem < *last)) {
			m1.insert(elem);
		}
	}
	m = m1;
}


int main(){
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