// Constructor and destructor
// ������ �̾߱�
#include <iostream>
using namespace std;

class A {

public:
	A() { cout << "AAA"; }
	void foo() { cout << "A:: FOO" << endl; }
};

class B {

public:
	B() {}
	virtual void goo() { cout << "B:: GOO" << endl; }
};


template<typename T>void mycpy(T* dst, T* src, int size)
{
	if (!is_trivially_copy_constructible<T>::value) // �ڸ����� �ʴٸ�
	{
		while (size--)
		{
			new(dst) T(*src);
			++dst, ++src;
		}
	}
	else
	{
		memcpy(dst, src, sizeof(T) * size);
	}


	
}


int main()
{
	B* b = static_cast<B*> (malloc(sizeof(B)));
	
	new(b) B; // B�� �����ڸ� ȣ���ҰԿ� �ϴ� �ǹ�

	b->goo();

}

/* �������� ��
* virtual table �ʱ�ȭ
* �θ�Ŭ������ ������ ȣ��
* �����ü�� ������ ȣ��

* �̵��� ��� ���Ǻ� �۾����̴� (Non trivial task)


�ݴ�� �ڸ��� �����ڴ� (trivial constructor) -> ������ ���� , trivial�ϴ� �̰� �ڸ��ϴ�
�θ�Ŭ���� ��� ����
�����ü ������ ����
������� ������ ����
virtual �Լ� ����


���� �����ڰ� �ڸ��ϸ� memcpy�״�� ����ϰ�
�ڸ����� ������ ������ �д�

*/