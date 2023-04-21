#include "Vector.h"
#include "MAGAZIN.h"
#include "event.h"
#include <iostream>
using namespace std;


void Vector::HandleEvent(const TEvent& e) {
	if (e.what == evMessage) {
		Object** p = beg;
		for (int i = 0; i < cur; i++) {
			(*p)->HandleEvent(e);//����� ������ (������� ����������)
			p++;//����������� ��������� �� ��������� ������
		}
	}
}


//����������
Vector::~Vector(void){
	if (beg != 0) delete[] beg;
	beg = 0;
}
//����������� � �����������
Vector::Vector(int n)
{
	beg = new Object * [n];
	cur = 0;
	size = n;
}
Vector::Vector(){
	beg = nullptr;
	cur = -1;
	size = 0;
}
//���������� �������, �� ������� ��������� ��������� p � ������
void Vector::Add(){
	Object* p;
	//����� �� �������� ���� ��������� �������
	cout << "1.PRINT" << endl;
	cout << "2.MAGAZIN" << endl;
	int y;
	cin >> y;
	if (y == 1) {//���������� ������� ������ PRINT
		PRINT* a = new (PRINT);
		a->Input();//���� �������� ���������
		p = a;
		if (cur < size){
			beg[cur] = p;//���������� � ������
			cur++;
		}
	}
	else if (y == 2) { //���������� ������� ������ MAGAZIN
		MAGAZIN* b = new MAGAZIN;
		b->Input();
		p = b;
		if (cur < size) {
			beg[cur] = p;
			cur++;
		}
	}
	else return;
}
//�������� �������

void Vector::Show(){
	if (cur == 0) cout << "Empty" << endl;
	Object** p = beg;//��������� �� ��������� ���� Object
	for (int i = 0; i < cur; i++){
		(*p)->Show();//����� ������ Show() (������� ����������)
		p++;//����������� ��������� �� ��������� ������
	}

}
//��������, ������� ���������� ������ �������
int Vector::operator ()(){return cur;}
//�������� �������� �� �������, ������ �� �������������!
void Vector::Del(){
	if (cur == 0)return;//������
	cur--;
}