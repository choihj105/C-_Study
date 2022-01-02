// iterator
#include <iostream>
using namespace std;


template<typename t> struct node {
	t data;
	node* next;
	node(t a, node* n) : data(a), next(n) {}
};


template<typename t> class slist_iterator
{
	node<t>* current;

public:
	slist_iterator(node<t>* p = 0) : current(p) {}

	template<typename u> bool operator !=(u data)
	{
		return current->data != data;
	}

	bool operator !=(const slist_iterator& p)
	{
		return current != p.current;
	}

	t& operator *() {return current->data; }

	slist_iterator& operator++() // ++a
	//slist_iterator& operator++(int)  // a++
	{
		current = current->next;
		return *this;
	}

};




template<typename t> class slist
{
	node<t>* head;
	
public:
	slist() : head(0) {}
	typedef slist_iterator<t> iterator;

	void push_front(const t& a) { head = new node<t>(a, head); }

	iterator end()
	{
		return iterator(0);
	}
	
	iterator begin(){
		return iterator(head);
	}

};


template<typename t1, typename t2>
t1 xfind(t1 first, t1 last, t2 c)
{
	while (first != last && *first != c)
		++first;
	return first;
}



int main()
{
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);

	//slist<int>* p = xfind(s, s + 4, 30); // 우리가만든 xfind는 리스트와는 호환이 되지 않는다.

	
	/*for (s.begin(); !s.end(); s.next())
	{
		cout << *s << endl;
	}*/


	//slist_iterator<int> p;
	//
	//for (p = s.begin(); p != s.end(); p++)
	//{
	//	cout << *p << endl;
	//}
	
	// slist<int>::iterator p;

	// auto p
	slist<int>::iterator p = xfind(s.begin(), s.end(), 40);
	cout << *p << endl;
	
	return 0;
}