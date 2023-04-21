#include "Object.h"
#include <iostream>
using namespace std;

class PRINT :public Object{
public:
	PRINT(void);//конструктор без параметров
	virtual ~PRINT(void);//деструктор
	void Show();//функция для просмотра атрибутов класса с помощью указателя
	void Input();//функция для ввода значений атрибутов
	PRINT(string, string);//конструктор с параметрами
	PRINT(const PRINT&);//конструктор копирования
	//селекторы
	string Get_author() { return author; }
	string Get_name() { return name; }
	//модификаторы
	void Set_author(string);
	void Set_name(string);
	PRINT& operator=(const PRINT&);//перегрузка операции присваивания
	void HandleEvent(const TEvent& e);
protected:
	string author, name;
};