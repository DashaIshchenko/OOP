#include "Object.h"
#include <iostream>
using namespace std;

class PRINT :public Object{
public:
	PRINT(void);//����������� ��� ����������
	virtual ~PRINT(void);//����������
	void Show();//������� ��� ��������� ��������� ������ � ������� ���������
	void Input();//������� ��� ����� �������� ���������
	PRINT(string, string);//����������� � �����������
	PRINT(const PRINT&);//����������� �����������
	//���������
	string Get_author() { return author; }
	string Get_name() { return name; }
	//������������
	void Set_author(string);
	void Set_name(string);
	PRINT& operator=(const PRINT&);//���������� �������� ������������
	void HandleEvent(const TEvent& e);
protected:
	string author, name;
};