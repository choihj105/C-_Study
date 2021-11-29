// 1. Remove duplicate elements in the vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // ���� ����
    vector<char> v{ 'a', 'b', 'b', 'a', 'e', 'd', 'd', 'b' };
    for (auto i : v) cout << i << " "; cout << endl; // a b b a e d d b

    // ���� �ߺ� ���� �ڵ�
    sort(v.begin(), v.end()); // �����ּ�, ���ּ� ��ŭ ���� ����
    vector<char>::iterator dupl_start = unique(v.begin(), v.end()); // unique �Լ��� unique�� ������ �������� ������ ���� 
    v.erase(dupl_start, v.end()); // �����ּ� , ���ּ� ��ŭ ����
   
    for (auto i : v) cout << i << " "; cout << endl; // a b d e

    return 0;
}