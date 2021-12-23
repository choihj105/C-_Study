#include <iostream>
using namespace std;

class D
{
public: int x;
};

class A : virtual public D{ // 가상 상속
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



// virtual 은 동적바인딩을 시켜주는것, 및 무조건 오버라이딩을 한다는 의미를 암묵적으로 알려줌

// 순수 가상함수를 하나라도 가지고 있으면 추상클래스가 된다. 이는 객체로 못만듬

// type id, 원래 참조값을 찾는 것