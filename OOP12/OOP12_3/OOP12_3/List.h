#pragma once
#include <iostream>
#include <set>
using namespace std;
template <typename T>
class List {
public:
	List(int);
	List(int, T);
	void print();
	int size() const { return length; };
	~List() {};
	void add(T data) { m.insert(data); };
	T& operator[](int);
	void mean();
	void minmax();
	void delete_range(double, double);
private:
	multiset<T> m;
	int length = 0;
};

template <typename T>
T& List<T>::operator[](int index) {
	auto it = m.find(index);
	if (it == m.end()) { it = m.emplace(T()); };
	return *it;
}

template <typename T>
List<T>::List(int n) {
	T data; length = n;
	for (int i = 0; i < n; ++i) {
		cout << "input data: ";
			cin >> data;
			m.insert(data);
	}
}

template <typename T>
List<T>::List(int n, T k) {
	length = n;
	for (int i = 0; i < n; ++i) {
		m.insert(k);
	}
}

template <typename T>
void List<T>::print() {
	for (T elem : m) cout << elem << endl; 
}

template <typename T>
void List<T>::mean() {
	double s = 0;
	for (auto& it : m) s += it;
	cout << "mean is " << s / length << endl;
	m.insert(s / length);
}

template <typename T>
void List<T>::minmax() {
	auto mini = m.begin();
	auto maxi = --m.end();
	cout << "min: " << *mini << endl;
	cout << "max: " << *maxi << endl;
	T sum = *mini; sum += (*maxi);
	cout << "summary = " << sum << endl;
	multiset<T> m1;
	for (auto t = m.begin(); t != m.end(); t++) {
		T temp = *t;
		temp += sum;
		m1.insert(temp);
	}
	m = m1;
}

template <typename T>
void List <T>::delete_range(double one, double two) {
	auto be = m.lower_bound(one);
	auto en = m.upper_bound(two);
	m.erase(be, en);
}











