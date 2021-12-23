#include <iostream>
using namespace std;

template <typename T, typename U> void Sort(U begin, U end, T cmp)
{
	for(auto i = begin; i != end, i++)
		for(auto j = i ; j != end ; j++)
			if (cmp(*i, *j)) {
				auto temp = *i;
				*i = *j;
				*j = temp;
			}
}