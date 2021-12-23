//#include <iostream>
//using namespace std;
//
//// my list
//template<typename T> struct Node {
//	T data;
//	Node* next;
//	Node(T a, Node* n) : data(a), next(n) {}
//};
//
//
//template<typename T> class slist {
//	Node<T>* head;
//	Node<T>* current;
//public:
//	slist(): head(0) {}
//	void push_front(const T& a) { head = new Node<T>(a, head); }
//};
//
//
//
//// my strchr
//template <typename T, typename U>
//T* xfind(T* first, T* last, U c)
//{
//	while(first != last && *first != c)
//		++first;
//	
//	return first;
//}
//
//int main()
//{
//	char s[] = "abcdefg";
//	char* p;
//
//	double d[] = { 1, 2, 3, 4, 5 };
//	double* i;
//
//	p = xfind(s, s+5, 'c');
//	i = xfind(d, d + 5, 4);
//
//
//	cout << *p << endl;
//	cout << *i << endl;
//}