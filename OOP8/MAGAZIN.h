#pragma once
#include "PRINT.h"
class MAGAZIN : public PRINT {
public:
	MAGAZIN(void);
	~MAGAZIN(void);
	void Show();
	void Input();
	MAGAZIN(string, string, int);
	MAGAZIN(const MAGAZIN&);
	int Get_pages() { return pages; }
	void Set_pages(int);
	MAGAZIN& operator=(const MAGAZIN&);
protected:
	int pages;
};
