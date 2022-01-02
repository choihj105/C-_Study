#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2;
	int idx, tmp;

	cout << "string1: ";
	getline(cin, str1);
	
	cout << "string2: ";
	getline(cin, str2);

	idx = str2.length();
	for (int i = 0; i < str1.length() - idx + 1; i++)
	{
		tmp = i;
		for (int j = 0; j < idx; j++) {
			if (str1[i + j] != str2[j]) { tmp = -1; break; }
		}
		if (tmp != -1) { break; }

	}

	if (tmp != -1) { cout << tmp; }
	else { cout << "Not found"; }



	return 0;
}