#include <iostream>
using namespace std;

// Buffer을 한개 더 안 쓰는 Circular Queue
template <typename T> class cQueue {
private:
	size_t front;
	size_t rear;
	size_t capacity;
	T* arr;

public:
	cQueue() {
		front = 0;
		rear = 0;
		capacity = 10; // use size 9
		arr = new T[capacity]; // empty buffer 1, for Empty, Full 
	}

	bool Full() {
		return front == (rear + 1) % capacity;
	}

	bool Empty() {
		return front == rear;
	}

	void enqueue(const T&& data) {
		if (!Full()) {
			arr[rear] = move(data);
			rear = (rear + 1) % capacity;
		}
	}

	T dequeue() {
		if (!Empty()) {
			T p = arr[front];
			front = (front + 1) % capacity;
			return p;
		}
	}

	void qPrint() {
		if (front > rear) {
			for (int i = front; i < capacity; i++) cout << arr[i] << ' ';
			for (int i = 0; i < rear; i++) cout << arr[i] << ' ';
		}
		else for(int i=front; i< rear; i++) cout << arr[i] << ' ';
	}
};


int main() {
	cQueue<int> q;
	q.qPrint();
}