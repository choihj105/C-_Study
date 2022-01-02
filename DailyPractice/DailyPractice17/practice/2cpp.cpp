// 1. Queue version 2.

#include <iostream>
#include <vector>
using namespace std;


template<typename T> class my_queue : private vector<T> {

public:
	void enqueue(T data) { vector<T>::push_back(data); };
	void dequeue() { vector<T>::erase(vector<T>::beSgin()); };
	T& peek() { return vector<T>::front(); };

};

int main()

{

	my_queue<int> q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);

	cout << q.peek() << endl; // 10
	q.dequeue();
	cout << q.peek() << endl; // 20
	q.dequeue();
	cout << q.peek() << endl; // 30
	q.dequeue();
	cout << q.peek() << endl; // 40
	q.dequeue();

}

