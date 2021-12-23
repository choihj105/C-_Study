#include <iostream>
using namespace std;

class Animal {
public:
	virtual ~Animal() {}
	virtual void cry() = 0;
};

class Dog : public Animal{
public:
	virtual ~Dog() {}
	void cry() { cout << "¿ù¿ù!" << endl; }
};

void foo(Animal* p) {
	Dog* pDog = dynamic_cast<Dog*>(p);
	if (pDog != 0)
	{
		cout << "°­¾ÆÁö: ¸Û¸Û!!" << endl;
	}

	p->cry();
}


int main()
{
	Animal* dog = new Dog;
	

	foo(dog);
	

}