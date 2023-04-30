#include "List.h"
#include <iostream>
#include <exception>
using namespace std;
int main() {
    system("color F0");
    //---RANGE ERROR---//
    cout << "FIRST ERROR\n\n";
    try {
        List a(5);
        cout << "a: " << a;
        cout << "a[4]: " << a[4] << endl;
        cout << "a[5]: ";
        cout << a[5];
    }
    catch (int) {
        cout << "Error occured\n";
    }
    system("pause");
    system("cls");

    //---SHIFT ERROR---//
    cout << "SECOND ERROR\n\n";
    try {
        List b(6);
        cout << "b: " << b;
        cout << "b + 2: " << b + 2 << endl;
        cout << "b + 6: " << b + 6 << endl;
        cout << "b + 7: ";
        cout << b + 7;
    }
    catch (int) {
        cout << "Error occured\n";
    }
    system("pause");
    system("cls");

    //---SIZE ERROR---//
    cout << "THIRD ERROR\n\n";
    try {
        List a(5); List b(6);
        cout << "a: " << a << "b: " << b;
        cout << "\nList c = a * a: " << a * a;
        cout << "\nList c = a * b: ";
        List c = a * b;

    }
    catch (int) {
        cout << "Error occured\n";
    }
    return 0;
}