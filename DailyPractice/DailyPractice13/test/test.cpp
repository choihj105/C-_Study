#include <stdio.h>

namespace Hio {
	class Myprint
	{
	private:
		int ss;

	public:

		Myprint& operator<< (const char* str)
		{
			ss += printf("%s", str);
			return *this;
		}
		Myprint& operator<< (int i)
		{
			ss += printf("%d", i);
			return *this;
		}
		Myprint& operator<< (double d)
		{
			ss += printf("%lf", d);
			return *this;
		}

		Myprint& operator<< (Myprint& (*f)(Myprint&))
		{
			return f(*this);
		}


	};

	Myprint& endl(Myprint& p)
	{
		printf("\n");
		return p;
	}

	Myprint p;
}

using namespace Hio;
int main()
{
	p << "Start;" << endl << "Endl";


	return 0;
}