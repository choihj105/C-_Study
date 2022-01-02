#include <iostream>
#include <string>
using namespace std;

int main()
{
	string inputString, outputString;
	char tmp;
	int key;

	cout << "Input string: ";
	getline(cin, inputString);

	cout << "Input key: ";
	cin >> key;


	// 65(A) ~  90(Z)
	for (int i = 0 ; i < inputString.length(); i++)
	{	

		if (inputString[i] != ' ')
		{
			tmp = inputString[i] + key;
			if (tmp > 90) { tmp = 64 + (tmp % 90); }
			outputString.push_back(tmp);
		}
		else 
		{ 
			tmp = ' ';
			outputString.push_back(tmp);
		}
		
	}
	
	cout << "Cipher string: " << outputString;

	return 0;
}