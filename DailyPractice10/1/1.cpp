// 1. mystrcat [Easy]
#include <iostream>
using namespace std;

char* mystrcat(const char* str1, const char* str2);

int main() {

	char* str = mystrcat("Hello!", "World!");
	cout << str << endl;

	return 0;
}


char* mystrcat(const char* str1, const char* str2) {
	int str1_len = 0;
	int str2_len = 0;
	char* tmp_str1 = (char*)str1;
	char* tmp_str2 = (char*)str2;
	while (*tmp_str1++)
	{
		str1_len++;
	}
	while (*tmp_str2++)
	{
		str2_len++;
	}
	
	int size = str1_len + str2_len;
	char* mystr = new char[size+1];

	for (int i = 0; i < str1_len; i++)
	{
		mystr[i] = str1[i];
		cout << mystr[i] << endl;
	}
	for (int j = str1_len; j < size; j++)
	{
		mystr[j] = *(str2 + j - str1_len);
		cout << mystr[j] << endl;
	}
	mystr[size] = '\0';

	return mystr;
}

