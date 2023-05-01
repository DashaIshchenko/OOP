#include "Pair.h"
#include "Files.h" 
#include <iostream> 
#include <fstream>
#include <string> 
using namespace std;

int main() {
	Pair p, temp;
	int k, c, num, count;
	double plus;
	char file_name[30];
	do {
		system("pause");
		system("cls");
		cout << "1. Create a file";
		cout << "\n2. Print file";
		cout << "\n3. Delete every pair lesser than yours";
		cout << "\n4. Add K elements after pair";
		cout << "\n5. Add int or double to pair";
		cout << "\n0.Exit\n";
		cin >> c;
		switch (c) {
		case 1:
			cout << "Input file name: "; cin >> file_name;
			k = make_file(file_name);
			if (k < 0)
				cout << "Error occured\n";
			break;
		case 2:
			cout << "Input file name: "; cin >> file_name; 
			k = print_file(file_name); 
			if (k == 0) cout << "File is open\n"; 
			if (k < 0) cout << "Can't read file\n"; 
			break;
		case 3:
			cout << "Input file name: "; cin >> file_name;
			cin >> temp;
			k = del_file(file_name, temp);
			if (k < 0) cout << "Error occured\n";
			break;
		case 4:
			cout << "Input file name: "; cin >> file_name;
			cout << "Input the position: "; cin >> num;
			cout << "Input the amount: "; cin >> count;
			k = add_file(file_name, num, count);
			if (k < 0) cout << "Error occured\n";
			if (k == 0) k = add_end(file_name, count);
			break;
		case 5:
			cout << "Input file name: "; cin >> file_name;
			cout << "Input number to add to every pair: ";
			cin >> plus;
			k = change_file(file_name, plus);
			if (k < 0) cout << "Error occured\n";
			break;
		}
	} while (c != 0);
	return 0;
}