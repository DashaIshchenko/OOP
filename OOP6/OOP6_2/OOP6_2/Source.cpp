#include "Stack.h"
#include <iostream>
using namespace std;

int main() {
	srand(time(NULL));
	Stack a(10);
	cout << a << endl;
	cout << "First element: " << a.front() << endl;
	for (int i = 0; i < a(); i++) a[i] = rand() % 100 - 40;
	cout << a << endl;
	Stack b(a); //
	cout << "Stack have been copied\n";
	cout << b << endl;
	int num;
	cout << "a * a: " << a * a << endl;
	cout << "Enter int number: "; cin >> num;
	b.push(num);
	b.pop();
	for (Iterator iter = b.first(); iter != b.last(); ++iter) cout << *iter << " ";
	return 0;
}