#include <iostream>
using namespace std;

template<typename T> class mStack {
private:
	T* arr;
	unsigned int m_capacity;
	unsigned int m_size;

public:
	// 持失切
	mStack() {
		m_capacity = 3; // default capacity 10;
		m_size = 0;
		arr = new T[m_capacity];
	}

	// 社瑚切
	~mStack() {
		if (arr != NULL) delete[] arr;
	}

	void resize() {
		m_capacity *= 2;
		T* tmp = new T[m_size];
		for (int i = 0; i < m_size; i++) tmp[i] = arr[i];

		arr = new T[m_capacity];
		for (int i = 0; i < m_size; i++) arr[i] = tmp[i];
		delete[] tmp;
		tmp = nullptr;
	}

	void push(T data) {
		if (m_size >= m_capacity) {
			resize();
		}

		arr[m_size++] = data;
	}

	T pop() {
		if (m_size)
			return arr[--m_size];
		else
			throw out_of_range("Stack is Empty");
	}

	T top() {
		if (m_size)
			return arr[m_size - 1];
		else
			throw out_of_range("Stack is Empty");
	}


	T capacity() {
		return m_capacity;
	}

	T size() {
		return m_size;
	}

	bool empty() {
		return m_size == 0 ? true : false;
	}
};


int main() {
	mStack<int> st;
	st.push(10);
	st.push(20);
	cout << st.capacity() << endl;

	st.push(30);
	st.push(30);
	st.push(30);
	cout << st.capacity() << endl;


	cout << st.pop() << '\n';
	cout << st.pop() << '\n';
	cout << st.pop() << '\n';
	cout << st.pop() << '\n';
	cout << st.pop() << '\n';

	cout << st.empty();
	

}