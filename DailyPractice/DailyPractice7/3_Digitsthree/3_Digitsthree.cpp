#include <iostream>
#include <string>
using namespace std;

string numConvert(long long num);

int main()
{
	long long inputNum;

	cout << "input number: ";
	cin >> inputNum;
	cout << numConvert(inputNum);
	return 0;
}

string numConvert(long long num) {
	string result;
	
	result = to_string(num);
	int index = result.length();
	
	while (true) 
	{
		index -= 3;
		if (index <= 0) { break; }
		result.insert(index, ",");
	}
	return result;

}

