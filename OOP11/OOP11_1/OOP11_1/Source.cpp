#include <iostream>
#include <list> 
#include <cstdlib> 
using namespace std;
typedef list<double>List;

List make_list(int n) {
	List l;
	for (int i = 0; i < n; ++i) {
		double a = round(((double)(rand()) / RAND_MAX * 10 + 1) * 100) / 100;
		l.push_back(a);
	}
	return l;
}

void print(List& l) {
	for (auto it = l.begin(); it != l.end(); ++it) cout << *it << " ";
	cout << endl;
}

double mean(List& l) {
	double s = 0;
	for (auto it = l.begin(); it != l.end(); ++it) s += *it;
	int n = l.size();
	s = round((double)(s/n)*100)/100;
	l.insert(l.end(), s);
	return s;
}

void range(List& l) {
	double one, two;
	cout << "\ninput first border: "; cin >> one;
	cout << "\ninput second border: "; cin >> two;
	if (one > two) swap(one, two);
	for (auto it = l.begin(); it != l.end();) {
		if (*it >= one && *it <= two) it = l.erase(it);
		else ++it;
	}
}


void add_minmax(List& l) {
	double maxi = l.front(), mini = l.front();
	for (auto it = l.begin(); it != l.end(); ++it) {
		if (*it > maxi) maxi = *it;
		if (*it < mini) mini = *it;
	}
	cout << "\nmin: " << mini;
	cout << "\nmax: " << maxi << endl;
	for (auto it = l.begin(); it != l.end(); ++it) *it = *it + mini + maxi;
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
