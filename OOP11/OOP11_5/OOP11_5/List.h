#pragma once
#include <list>
#include <queue>
#include <iostream>
using namespace std;

template <class T>
class List {
	priority_queue <T> pq;
	int size = pq.size();
public:
	List(int n);
	void print();
	~List() {};
	void mean();
	void add(T data) { pq.push(data); };
	void range(double, double);
	void minmax();
};

template <typename T>
priority_queue<T> copy_list_to_pq(list<T> l) {
	priority_queue<T> pq;
	for (auto it = l.begin(); it != l.end(); ++it) pq.push(*it);
	return pq;
}

template <typename T>
list<T> copy_pq_to_list(priority_queue<T> pq) {
	list<T> l;
	while (!pq.empty()) {
		l.push_back(pq.top());
		pq.pop();
	}
	return l;
}


template <class T>
List<T>::List(int n) {
	T a; size = n;
	cout << "input data\n";
	for (int i = 0; i < n; ++i) {
		cin >> a;
		this->add(a);
	}
}

template <class T>
void List<T>::print() {
	list<T> l = copy_pq_to_list(pq);
	for (auto it = l.begin(); it != l.end(); ++it) cout << *it << " ";
}

template <class T>
void List<T>::mean() {
	T s{};
	list<T> l = copy_pq_to_list(pq);
	for (auto it = l.begin(); it != l.end(); ++it) s += *it;
	s /= (double)size;
	cout << "mean is " << s << endl;
	pq = copy_list_to_pq(l); this->add(s);
	
}

template <class T>
void List<T>::range(double one, double two) {
	if (two < one) swap(one, two);
	list<T> l = copy_pq_to_list(pq);
	for (auto it = l.begin(); it != l.end();) {
		if (*it > one && two > *it) it = l.erase(it);
		else ++it;
	}
	pq = copy_list_to_pq(l);
}


template <class T>
void List<T>::minmax() {
	list<T> l = copy_pq_to_list(pq);
	T mini = l.front(), maxi = l.front();
	for (auto it = l.begin(); it != l.end(); ++it) {
		if (*it < mini) mini = *it;
		if (*it > maxi) maxi = *it;
	}
	cout << "\nmin: " << mini;
	cout << "\nmax: " << maxi << endl;

	maxi += mini;
	for (auto it = l.begin(); it != l.end(); ++it) *it += maxi;
	pq = copy_list_to_pq(l);
}