#include <iostream>
using namespace std;

class D
{
public: int x;
};

class A : virtual public D{ // ���� ���
public: int a;
};

class B : virtual public D{
public: int b;
};

class C: public A, public B {
public: int c;
};


int main()
{
	C c;
	c.x;

}



// virtual �� �������ε��� �����ִ°�, �� ������ �������̵��� �Ѵٴ� �ǹ̸� �Ϲ������� �˷���

// ���� �����Լ��� �ϳ��� ������ ������ �߻�Ŭ������ �ȴ�. �̴� ��ü�� ������

// type id, ���� �������� ã�� ��