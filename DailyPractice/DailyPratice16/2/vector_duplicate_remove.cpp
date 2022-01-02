// 1. Remove duplicate elements in the vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // 벡터 원소
    vector<char> v{ 'a', 'b', 'b', 'a', 'e', 'd', 'd', 'b' };
    for (auto i : v) cout << i << " "; cout << endl; // a b b a e d d b

    // 벡터 중복 제거 코드
    sort(v.begin(), v.end()); // 시작주소, 끝주소 만큼 벡터 정렬
    vector<char>::iterator dupl_start = unique(v.begin(), v.end()); // unique 함수는 unique한 원소의 다음원소 포인터 리턴 
    v.erase(dupl_start, v.end()); // 시작주소 , 끝주소 만큼 삭제
   
    for (auto i : v) cout << i << " "; cout << endl; // a b d e

    return 0;
}