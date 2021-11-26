#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main()
{
	map<int, string> m;

	m.insert(make_pair(0, "hi"));
	m.insert(make_pair(1, " k "));
	m.insert(make_pair(2, " u"));

	if (m.find(4) == m.end())
	{
		cout << "¤Ğ¤Ğ";
	}

	return 0;
}