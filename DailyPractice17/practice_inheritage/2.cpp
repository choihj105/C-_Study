#include <iostream>
#include <string>
using namespace std;


class mom
{
public: int a;
};


class father
{
public: int b;
};

class me :public mom, father
{
public: int c;
};

int main()
{

	me m;
	m.a = 1;
	m.b = 2;
	m.c = 3;


	cout << m.a << m.b << m.c << end;

	return 0;
}
