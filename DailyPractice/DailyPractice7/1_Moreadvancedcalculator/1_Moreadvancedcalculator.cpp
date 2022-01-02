#include <iostream>
using namespace std;

template <typename YourType>
YourType calc(YourType a, YourType b, char oper);

int main() 
{
	double a, b;
	char o;
	cout << "***********\n\n" << "+ : Add\n" << "- : Subtract\n" \
		<< "* : Multiply\n" << "/ : Divide\n" << "Q: quit\n\n" << "***********\n\n";

	while (true) {

		cout << "Select an operator: ";
		cin >> o;

		if (o == 'Q') { break;}
		else {

			cout << "Input two number: ";
			cin >> a >> b;
			cout << "Answer: " << calc(a, b, o) << "\n\n";
		}
	}

	return 0;
}


template <typename YourType>
YourType calc(YourType a, YourType b, char oper)
{
	if (oper == '+') { return a + b; }
	else if (oper == '-') { return a - b; }
	else if (oper == '*') { return a * b; }
	else if (oper == '/') {
		if (b == 0) { cout << "This Program can't divide by 0"; return 0; }
		else { return a / b; }
	}
}