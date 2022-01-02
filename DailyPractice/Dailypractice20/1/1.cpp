// Constructor and destructor
// 소멸자 이야기
#include <iostream>
using namespace std;

class Animal {
public:
	virtual void Cry() { cout << "animal" << endl; }
	
	Animal() { cout << "Ani const" << endl; }
protected:
	~Animal() { cout << "Ani dest" << endl; }
};

class Dog : public Animal {
public:
	virtual void Cry() { cout << "mung" << endl; }
	Dog() { cout << "Dog const" << endl; }
	~Dog() { cout << "Dog dest" << endl; }

};


int main()
{
	Animal* a = new Dog;
	a->Cry(); // 동적 바인딩에 의해서 mung 호출 // memory leak 발생가능
	
	// delete a; // 이 delete라는것은 destructor + free() 이기 때문에, 자식이 접근을 불가하게 만들음

	delete static_cast<Dog*>(a); // Dog의 파괴자 호출하라고 명시적으로 알려주기때문에 더욱 명확함


}

// 가상 소멸자, 이건 virtual 이있는 클래스면 해줘야한다.