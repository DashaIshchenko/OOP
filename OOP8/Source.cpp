#include <iostream>
#include "MAGAZIN.h"
#include "Vector.h"
#include "Dialog.h"
using namespace std;

int main() {
	cout << "m: make group\n+: add element\n";
	cout << "-: delete element\ns: info (elements)\n";
	cout << "z: info (names)\nq: quit\n";
	Dialog D;
	D.Execute();
	
	return 0;
}