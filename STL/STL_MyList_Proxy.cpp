#include <iostream>
using namespace std;

// my list
template<typename T> struct Node {
	T data;
	Node* next;
	Node(T a, Node* n) : data(a), next(n) {}
};


template<typename T> class slist_iterator {
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = 0) : current(p) {}
	bool operator!=(const slist_iterator& p) { return current != p.current; }
	template<typename U> bool operator!=(U data) { return current->data != data; }

	T& operator*() { return current->data; }
	
	slist_iterator& operator++(int) { // a++
		current = current->next;
		return *this;
	}
	slist_iterator& operator++() { // ++a
		current = current->next;
		return *this;
	}

};


template<typename T> class slist {
	Node<T>* head;
public:
	slist() : head(0) {}
	void push_front(const T& a) { head = new Node<T>(a, head); }
	
	typedef slist_iterator<T> iterator;
	iterator end() { return iterator(0); }
	iterator begin() { 	return iterator(head);}
};






// my strchr
template <typename T1, typename T2>
T1 xfind(T1 first, T1 last, T2 c)
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

	/*slist<int>::iterator p;
	for (p = s.begin(); p != s.end(); p++)
	{
		cout << *p << endl;
	}*/

	//slist<int>::iterator p2 = xfind(s.begin(), s.end(), 30);
	auto p2 = xfind(s.begin(), s.end(), 30);


}