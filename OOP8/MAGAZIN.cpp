#include "MAGAZIN.h"
MAGAZIN::MAGAZIN(void) :PRINT(){pages = 0;}
MAGAZIN::~MAGAZIN(void){}
MAGAZIN::MAGAZIN(string M, string C, int G) :PRINT(M, C){ pages = G; }
MAGAZIN::MAGAZIN(const MAGAZIN& L){
	author = L.author;
	name = L.name;
	pages = L.pages;
}
void MAGAZIN::Set_pages(int G){ pages = G;}
MAGAZIN& MAGAZIN::operator=(const MAGAZIN& l){
	if (&l == this)return *this;
	author = l.author;
	name = l.name;
	return *this;
}
void MAGAZIN::Show(){
	cout << "\nauthor : " << author;
	cout << "\nname : " << name;
	cout << "\npages : " << pages;
	cout << "\n";
}
void MAGAZIN::Input(){
	cout << "\nauthor:"; cin >> author;
	cout << "\nname:"; cin >> name;
	cout << "\npages : "; cin >> pages;
}