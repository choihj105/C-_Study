#include <iostream>
#include <string>
using namespace std;


struct node
{
	int data;
	node* next;
	int idx;
	node(int d, node* n, int i) : data(d), next(n), idx(i){}
};

class slist
{
private:
	node* head;
	node* p;
	int idx;

public:
	slist() : head(0), p(0), idx(0){}

	void push_front(const int &d) { head = new node( d, head, idx++); }

	slist& next()
	{
		if (!p) p = head;
		else p = p->next;
		return *this;
	}
	int get()
	{
		return p->data;
	}

	int operator[] (int i)
	{
		node* s;

		for (s = head; s->idx != i; s = s->next);

		return s->data;
	}

};

int main()
{
	slist s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);

	//s.next();
	//cout << s.get() << endl;

	cout << s[2];


	return 0;
}



