// afforded unique_ptr<>

#include <iostream>
#include <memory>
using namespace std;


int main()
{
	unique_ptr<int> p1(new int);
	*p1 = 10;
	
	// unique_ptr<int> p2(p1) -> error!
	unique_ptr<int> p2 = std::move(p1); // use move function

	// cout << *p1 << endl; -> error!

	return 0;
}