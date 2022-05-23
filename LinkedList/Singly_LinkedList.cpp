#include <iostream>
using namespace std;


template<typename T> struct Node {
	T data;
	Node<T>* next;
	Node(const T& a, Node* n) : data(a), next(n) {}
};

template<typename T> class slist {
private:
	Node<T>* head;
	Node<T>* current;

public:
	slist() : head(0) {}

	// O(1)
	void push_front(const T& a) {
		head = new Node(a, head);
	}

	//  O(n)
	void push_back(const T& a) {
		
		current = head;
		if (current == NULL) {
			head = new Node<T>(a, 0);
			return;
		}
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = new Node<T>(a, 0);
	}

	// O(n)
	Node<T>* findNode(const T& a) {
		current = head;
		while (current != NULL) {
			if (current->data == a) return current;
			current = current->next;
		}
		throw "값을 찾지 못하였습니다.";
	}

	// O(1)
	void addAfter(Node<T>* prev_node, const T& a) {
		prev_node->next = new Node<T>(a, prev_node->next);
	}

	void deleteAfter(Node<T>* prev_node) {
		if (prev_node->next != NULL)
			prev_node->next = prev_node->next->next;
	}

	void lPrint() {
		current = head;
		while (current != NULL) {
			cout << current->data << ' ';
			current = current->next;
		}
		cout << '\n';
	}
};

int main() {
	slist<int> s;
	s.push_back(10);
	s.push_back(20);
	s.push_back(30);

	Node<int>* n = s.findNode(10);
	s.addAfter(n, 40);
	s.lPrint();
	s.deleteAfter(n);
	s.lPrint();
}