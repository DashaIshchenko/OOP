#pragma once
#include <list>
#include <iostream>
using namespace std;

template <class T>
class List {
	list <T> l;
	int size = l.size();
public:
	List(int n);
	void print();
	~List() {};
	void mean();
	void add(T data) { l.emplace(l.end(), data); };
	void range(double, double);
	void minmax();
};

template <class T>
List<T>::List(int n) {
	T a; size = n;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		this->add(a);
	}
}

template <class T>
void List<T>::print() {
	for (auto it = l.begin(); it != l.end(); ++it) cout << *it << " ";
}

template <class T>
void List<T>::mean() {
	T s;
	for (auto it = l.begin(); it != l.end(); ++it) s += *it;
	s /= (double)size;
	cout << "mean is " << s << endl;
	this->add(s);
}

template <class T>
void List<T>::range(double one, double two) {
	if (two < one) swap(one, two);
	for (auto it = l.begin(); it != l.end();) {
		if (*it > one && two > *it) it = l.erase(it);
		else ++it;
	}
}


template <class T>
void List<T>::minmax() {
	T mini = l.front(), maxi = l.front();
	for (auto it = l.begin(); it != l.end(); ++it) {
		if (*it < mini) mini = *it;
		if (*it > maxi) maxi = *it;
	}
	cout << "\nmin: " << mini;
	cout << "\nmax: " << maxi << endl;

	maxi += mini;
	for (auto it = l.begin(); it != l.end(); ++it)
		*it += maxi;
}