#include <iostream>
#include <set>
#include "List.h"
using namespace std;

int main() {
	system("color F0");
	int n; double one, two;
	cout << "input size: "; cin >> n;
	List<float> m(n);
	m.print();
	cout << "\n===insert arithmetic mean===\n"; m.mean();  m.print();
	cout << "\n===add min and max to every element===\n"; m.minmax(); m.print();
	cout << "\n===delete from range===\n"; 
	cout << "\ninput first border: "; cin >> one;
	cout << "\ninput second border: "; cin >> two;
	m.delete_range(one, two); m.print();
	return 0;
}