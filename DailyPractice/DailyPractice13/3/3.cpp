#include <iostream>
#include <string>
using namespace std;

class myStr
{
private:
	char* str;

public:

	void operator=(const char* p)
	{
		str = new char[strlen(p) + 1];
		strcpy(str, p);
	}

	char* show()
	{
		return str;
	}
};



int main() {

	myStr s;

	s = "Hello!";

	

	return 0;
}