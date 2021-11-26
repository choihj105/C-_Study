#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;
	node(int d, node* n) : data(d), next(n){}
};

class slist
{
private:
	node* head;
	node* p;

public:
	slist() : head(0), p(0){}

	void push_front(const int& d) { head = new node(d, head); }
	void push_back(const int& d)
	{
		node* loop;

		if(!head) head = new node(d, 0);
		else
		{
			for (loop = head; loop->next != 0; loop = loop->next);
			loop->next = new node(d,0);
		}
		

	}
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


};

int main()
{
	//  head-> 60 50 40 10 20 30
	slist s;
	s.push_back(10);
	s.push_back(20);
	s.push_back(30);
	s.push_front(40);
	s.push_front(50);
	s.push_front(60);

	int iter = 6;
	while (iter--)
	{
		s.next(); // 60
		cout << s.get() << endl;
	}
	
	return 0;
}


