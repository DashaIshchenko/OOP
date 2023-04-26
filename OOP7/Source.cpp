#include "Pair.h"
#include "List.h"
#include <iostream>
using namespace std;

int main() {
	Pair p1(2, 2.5);
	List<Pair> a(3, p1);
	cout << "List created with constructor: "<< a << endl;
	cout << "list.front(): " << a.front() << "\nInput your list:\n";
	cin >> a;
	cout << a << endl;
	List<Pair> b(a);
	cout << "List was copied (a = b)\n";
	cout << b << endl;
	List<Pair> c = a * b;
	cout << "a * b\n" << c << endl;
	Pair num;
	cout << "Input the pair:\n"; cin >> num;
	b.pushback(num);
	cout << "list.pushback() + list.popfront()\n";
	b.popfront();
	cout << "--Printing list with iterator--\n";
	for (Iterator<Pair> iter = b.first(); iter != b.last(); ++iter)
		cout << *iter << '\n';
	return 0;
}