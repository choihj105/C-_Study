//// iterator
//#include <iostream>
//using namespace std;
//
//
//template<typename T> struct Node {
//	T data;
//	Node* next;
//	Node(T a, Node* n) : data(a), next(n) {}
//};
//
//
//template<typename T> class slist_iterator
//{
//	Node<T>* current;
//
//public:
//	slist_iterator(Node<T>* p = 0) : current(p) {}
//
//	template<typename U> bool operator !=(U data)
//	{
//		return current->data != data;
//	}
//
//	bool operator !=(const slist_iterator& p)
//	{
//		return current != p.current;
//	}
//
//	T& operator *() {return current->data; }
//
//	slist_iterator& operator++() // ++a
//	//slist_iterator& operator++(int)  // a++
//	{
//		current = current->next;
//		return *this;
//	}
//
//};
//
//
//
//
//template<typename T> class slist
//{
//	Node<T>* head;
//	
//public:
//	slist() : head(0) {}
//	typedef slist_iterator<T> iterator;
//
//	void push_front(const T& a) { head = new Node<T>(a, head); }
//
//	iterator end()
//	{
//		return iterator(0);
//	}
//	
//	iterator begin(){
//		return iterator(head);
//	}
//
//};
//
//
//template<typename T1, typename T2>
//T1 xfind(T1 first, T1 last, T2 c)
//{
//	while (first != last && *first != c)
//		++first;
//	return first;
//}
//
//
//
//int main()
//{
//	slist<int> s;
//	s.push_front(10);
//	s.push_front(20);
//	s.push_front(30);
//	s.push_front(40);
//	s.push_front(50);
//
//	//slist<int>* p = xfind(s, s + 4, 30); // 우리가만든 xfind는 리스트와는 호환이 되지 않는다.
//
//	
//	/*for (s.begin(); !s.end(); s.next())
//	{
//		cout << *s << endl;
//	}*/
//
//
//	//slist_iterator<int> p;
//	//
//	//for (p = s.begin(); p != s.end(); p++)
//	//{
//	//	cout << *p << endl;
//	//}
//	
//	// slist<int>::iterator p;
//
//	// auto p
//	slist<int>::iterator p = xfind(s.begin(), s.end(), 40);
//	cout << *p << endl;
//	
//	return 0;
//}