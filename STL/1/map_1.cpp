#include <iostream>
#include <map>
using namespace std;

int main()
{
	string arr[] = { "string1", "string2", "string3" };

	map<int, string> m;
	map<string, int> m1;

	m[0] = "string1";
	m[1] = "string2";
	m[2] = "string3";

	map<string, string> m2;

	m2["name"] = "hojun"; 
	m2["univerciyu"] = "chonnam";
	m2["title"] = "c++";

	m1.insert(make_pair("str3", 1));
	m1.insert(make_pair("str5", 1));
	m1.insert(make_pair("str7", 1));
	m1.insert(make_pair("str8", 1));
	m1.insert(make_pair("str9", 1));
	m1.insert(make_pair("str1", 1));
	m1.insert(make_pair("str7", 1));


	map<string, int>::iterator it;
	for (it = m1.begin(); it != m1.end(); it++)
		cout << it->first << ": " << it->second << endl;

	 이진트리 중회순회



	return 0;
};