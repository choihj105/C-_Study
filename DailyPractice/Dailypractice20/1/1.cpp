// Constructor and destructor
// �Ҹ��� �̾߱�
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
	a->Cry(); // ���� ���ε��� ���ؼ� mung ȣ�� // memory leak �߻�����
	
	// delete a; // �� delete��°��� destructor + free() �̱� ������, �ڽ��� ������ �Ұ��ϰ� ������

	delete static_cast<Dog*>(a); // Dog�� �ı��� ȣ���϶�� ��������� �˷��ֱ⶧���� ���� ��Ȯ��


}

// ���� �Ҹ���, �̰� virtual ���ִ� Ŭ������ ������Ѵ�.