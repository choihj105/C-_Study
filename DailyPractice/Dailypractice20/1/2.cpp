// Constructor and destructor
// 생성자 이야기
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
	if (!is_trivially_copy_constructible<T>::value) // 자명하지 않다면
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
	
	new(b) B; // B의 생성자만 호출할게요 하는 의미

	b->goo();

}

/* 생성자의 일
* virtual table 초기화
* 부모클래스의 생성자 호출
* 멤버객체의 생성자 호출

* 이들은 모두 조건부 작업들이다 (Non trivial task)


반대로 자명한 생성자는 (trivial constructor) -> 성능이 좋다 , trivial하다 이건 자명하다
부모클래스 상속 없고
멤버객체 생성자 없고
명시적인 생성자 없고
virtual 함수 없고


만약 생성자가 자명하면 memcpy그대로 사용하고
자명하지 않으면 조건을 둔다

*/