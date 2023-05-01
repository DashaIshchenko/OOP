#include "List.h"
#include <iostream>
using namespace std;

int main() {
	system("color F0");
	int n; double one, two;
	cout << "input size: "; cin >> n;
	List<int> l(n);
	l.print();
	cout << "\n===insert arithmetic mean===\n"; l.mean();  l.print();
	cout << "\n===add min and max to every element===\n"; l.minmax(); l.print();
	cout << "\n===delete from range===\n";
	cout << "\ninput first border: "; cin >> one;
	cout << "\ninput second border: "; cin >> two;
	l.range(one, two); l.print();

	return 0;
}