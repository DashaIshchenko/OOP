#pragma once
#include "Vector.h"
#include "event.h"
class Dialog : public Vector {
public:
	Dialog();//контруктор
	virtual ~Dialog(void);//деструктор
	virtual void GetEvent(TEvent& event);//получить событие
	virtual void Execute();//главный цикл обработки событий
	virtual void HandleEvent(TEvent& event); //обработчик
	virtual void ClearEvent(TEvent& event);//очистить событие
	bool Valid();//проверка атрибута EndState
	void EndExec();//обработка события «конец работы»
protected:
	int EndState;
};

