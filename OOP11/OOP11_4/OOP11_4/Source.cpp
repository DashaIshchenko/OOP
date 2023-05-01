#include "Pair.h"
#include <iostream>
#include <queue>
#include <list>
using namespace std;

typedef priority_queue<Pair> PQ;
typedef list<Pair> List;

PQ make_pq(int n) {
	PQ s; 
	for (int i = 0; i < n; i++) {
		Pair t;
		t.set_random();
		s.push(t);
	}
	return s;
}

List copy_pq_to_list(PQ pq) {
	List l;
	while (!pq.empty()) {
		l.push_back(pq.top());
		pq.pop();
	}
	return l;
}

PQ copy_list_to_pq(List l) {
	PQ pq;
	for (auto it = l.cbegin(); it != l.cend(); ++it) pq.push(*it);
	return pq;
}

void print_pq(PQ pq) {
	List l = copy_pq_to_list(pq);
	for (auto it = l.cbegin(); it != l.cend(); ++it) cout << *it << " ";
	cout << endl;
}

Pair mean(PQ &pq) {
	Pair s;
	List l = copy_pq_to_list(pq);
	for (auto it = l.begin(); it != l.end(); ++it) s += *it;
	int n = l.size();
	s /= n;
	l.push_front(s);
	pq = copy_list_to_pq(l);
	return s;
}

void range(PQ& pq, double one, double two) {
	if (two < one) swap(one, two);
	List l = copy_pq_to_list(pq);
	for (auto it = l.begin(); it != l.end();) {
		if (*it > one && two > *it) it = l.erase(it);
		else ++it;
	}
	
	pq = copy_list_to_pq(l);
}


void minmax(PQ& pq) {
	List l = copy_pq_to_list(pq);
	Pair mini = l.front(), maxi = l.front();
	for (auto it = l.begin(); it != l.end(); ++it) {
		if (mini > *it) mini = *it;
		if (*it > maxi) maxi = *it;
	}
	maxi += mini;
	for (auto it = l.begin(); it != l.end(); ++it)
		*it += maxi;
	pq = copy_list_to_pq(l);
	l.clear();
}

int main() {
	srand(time(NULL));
	system("color F0");
	int n; double one, two;
	cout << "input size: "; cin >> n;
	PQ pq = make_pq(n);
	print_pq(pq);
	cout << "\n===insert arithmetic mean (" << mean(pq) << ")===\n"; print_pq(pq);
	cout << "\n===add min and max to every element===\n"; minmax(pq); print_pq(pq);
	cout << "\n===delete from range===\n";
	cout << "\ninput first border: "; cin >> one;
	cout << "\ninput second border: "; cin >> two;
	range(pq, one, two); print_pq(pq);

	
	return 0;
}