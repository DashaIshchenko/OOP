#pragma once
#include "Vector.h"
#include "event.h"
class Dialog : public Vector {
public:
	Dialog();//����������
	virtual ~Dialog(void);//����������
	virtual void GetEvent(TEvent& event);//�������� �������
	virtual void Execute();//������� ���� ��������� �������
	virtual void HandleEvent(TEvent& event); //����������
	virtual void ClearEvent(TEvent& event);//�������� �������
	bool Valid();//�������� �������� EndState
	void EndExec();//��������� ������� ������ �������
protected:
	int EndState;
};

