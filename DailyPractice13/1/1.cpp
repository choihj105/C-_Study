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
			p= tail = head = n;
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

	my_list& operator +(int i)
	{ 
		append(i);
		return *this;
	}

	my_list& operator +(my_list& afterList)
	{
		tail->next = afterList.head;
		tail = afterList.tail;
		len += afterList.len;
		
		return *this;
		
	}

	my_list& operator -(int n)
	{
		int tmp_cur = cur;
		int tmp_num = n-2;

		if ((len < n) || (n < 0))
		{
			cout << "Please check Index";
		}
		else {
			rewind();
			
			if (n == 1) // 첫번째 노드 제거시
			{
				head = head->next;
			}
			else if (n == len) // 마지막 노드 제거시
			{
				while (tmp_num--)
				{
					next();
				}
				p->next = NULL;
			}
			else // 그 외 중간 노드 제거시
			{	
				while (tmp_num--)
				{
					next();
				}
				p->next = p->next->next;
			}

			// p 노드 다시 원위치로
			rewind();
			while (tmp_cur--)
			{
				next();
			}
			len--;
		}
		return *this;
	} // remove a 'n'-th node

	//										// n번째에 위치한 노드를 제거합니다.  

	void printall() {
		int tmp_len = len;
		int tmp_cur = cur;

		rewind();
		while (tmp_len--)
		{
			cout << get() << " ";
			next();
		}
		cout << endl;
		cur = tmp_cur;
	}
};



int main()

{
	my_list l;
	my_list ll;

	l.append(10).append(20).append(30).append(40);
	l.next().next();
	cout << l.get() << endl; // print out 30

	ll = ll + 100 + 200 + 300; // append values 100, 200 and 300 to ll.
	ll.next();
	cout << ll.get() << endl; // print out 200

	ll = ll + l;
	ll.printall(); // 100 200 300 10 20 30 40

	ll.next().next().next();
	cout << ll.get() << endl; // print out 20

	ll = ll - 5; // remove the 5-th node.
	ll.next();
	cout << ll.get() << endl; // print out 40, not 30. 
	ll.printall();
	
	return 0;
}