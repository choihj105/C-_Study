// 1. Linked list with classes [Normal]
#include <iostream>
using namespace std;


class my_list
{
private:
	struct Node
	{
		int data;
		struct Node* next;
	};

	// your code	
	int len;
	int cur;
	Node* head, * tail, * p;
	

public:

	my_list() : len(0), cur(0), head(NULL), tail(NULL), p(NULL)
	{
	};

	my_list& append(int value) { 
		Node* n = new Node;
		n->data = value;
		n->next = NULL;

		if (len == 0) {
			tail = head = n;
			len = 1;
		}
		else
		{
			tail = tail->next = n;
			len++;
		}
		return *this;

	} // add a new element to the list


	my_list& next() {
		Node* tmp = head;
		int tmp_cur = cur + 1;

		if (cur < len) {
			while (tmp_cur--) {
				tmp = tmp->next;
			}
			p = tmp;
			cur++;
		}
		else {
			cout << "범위를 초과했습니다" << endl;
		}
		
		return *this;

	}   // move to the next element in the list

	int get() {
		return p->data;
	}    // return the value of the current position

	void rewind() {
		p = head;
		cur = 0;
	} // reset the current position to the first of the list.

	void info() {
		cout << "length: " << len << endl;
		cout << "current position: " << cur << endl;
	} // print out the length of the list and the current position.
	void headnext() {
		cout << head->next->data;
	}
};



int main()

{

	my_list l;

	l.append(10).append(20).append(30).append(40);

	l.next().next();

	cout << l.get() << endl; // print out 30

	l.info(); // print out 'length: 4, current: 2 (or 3 depending on your start index)'

	l.rewind();

	cout << l.get() << endl; // print out 10 
}
