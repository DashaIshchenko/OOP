#pragma once 
#include <string> 
#include <iostream> 
using namespace std;
class Error {
public:
	virtual void what() {};
};
class OutOfRange :
	public Error {
protected:
	string msg;
public:
	OutOfRange() { msg = "Index Out Of Range\n"; }
	virtual void what() { cout << msg; }
};
class SizeError :
	public Error {
protected:
	string msg;
public:
	SizeError() { msg = "Different Sizes Of Lists\n"; }
	virtual void what() { cout << msg; }
};
class NumberError :
	public Error {
protected:
	string msg;
public:
	NumberError() { msg = "Cannot Move To The Postition\n"; }
	virtual void what() { cout << msg; }
};