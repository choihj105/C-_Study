//2. Queue [Normal]
#include <iostream>
using namespace std;

// 31���� ������ �� �ִ� my_queue +1�� full Ȯ�ο�
class my_queue
{
private:

	int *arr = new int[32];
	int head_ptr; // ������ ��
	int tail_ptr; // ���� ��

public:

	my_queue() : head_ptr(0), tail_ptr(0){}

	void Enqueue(int data) {
		if (head_ptr % 32 == (tail_ptr + 1) % 32) {
			// Full
			cout << "Error: FULL Queue" << endl;

		}
		else {
			arr[tail_ptr++] = data;
		}
	};

	int Dequeue() {
		if (head_ptr % 32 == tail_ptr % 32) {
			// Empty;
			cout << "Error: Empty Queue" << endl;

		}
		else {
			return arr[head_ptr++];
		}
	};

	int Peek() {
		return arr[head_ptr];
	};

};



int main()
{
	my_queue q;

	q.Enqueue(3);
	q.Enqueue(4);
	q.Enqueue(5);

	cout << "head: " << q.Peek() << endl;
	cout << "First: " << q.Dequeue() << endl;
	cout << "Second: " << q.Dequeue() << endl;
	cout << "Third: " << q.Dequeue() << endl;

}

