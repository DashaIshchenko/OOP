#include "PRINT.h"
#include "Object.h"
#include "event.h"
#include <iostream>
using namespace std;

void PRINT::HandleEvent(const TEvent& e) {
	if (e.what == evMessage) {//событие-сообщение
		switch (e.command) {
		case cmGet: cout << "name = " << Get_name() << endl; break;
		}
	}
}
PRINT::PRINT(void){
	author = "";
	name = "";
}
PRINT::~PRINT(void){}
PRINT::PRINT(string M, string C){
	author = M;
	name = C;
}
PRINT::PRINT(const PRINT& PRINT){
	author = PRINT.author;
	name = PRINT.name;
}
void PRINT::Set_name(string C){
	name = C;
}
void PRINT::Set_author(string M){
	author = M;
}
PRINT& PRINT::operator=(const PRINT& c){
	if (&c == this)return *this;
	author = c.author;
	name = c.name;
	return *this;
}
void PRINT::Show(){
	cout << "\nauthor : " << author;
	cout << "\nname : " << name;
	cout << "\n";
}
void PRINT::Input(){
	cout << "\nauthor:"; cin >> author;
	cout << "\nname:"; cin >> name;
}