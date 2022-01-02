// 3. Heap (data structure) [Hard, Bonus problem! You can remain this as blank] 
#include <iostream>
using namespace std;

int main() {


	return 0;
}


/*

3. Heap (data structure) [Hard, Bonus problem! You can remain this as blank]

- See https://en.wikipedia.org/wiki/Heap_(data_structure

- and, namu-wiki also describes it well :) https://namu.wiki/w/%ED%9E%99%20%ED%8A%B8%EB%A6%AC

- 힙 자료구조 (힙트리)를 만들어봅시다. 위 링크를 참고하세요! 나무위키에도 설명이 잘 되어있어요!



- A Heap is a special binary tree-based data structure to find a maximum or minimum value. It is widely used for sorting elements or priority queueing.

- Here, we only consider a maximum-heap that finds a maximum value; The parent node is always larger than the child node, but there is no relationship between sibling nodes.



          16

        /    ╲

      14     10

     /  ╲   /  ╲

   8     7  9   3

  / ╲   /

 2   4 1



- If a new value is given, it is first appended as the leaf node. Then, it switches the position with the parent if the new one is larger than the parent. It is repeated until the parent would be larger than it.

See the below. When'15' is the new one,



Round 0:  16

        /    ╲

      14     10

     /  ╲   /  ╲

   8     7  9   3

  / ╲   / ╲

 2   4 1  '15'



- Add '15'



Round 1:   16

        /       ╲

      14         10

     /  ╲       /  ╲

   8    '15'    9   3

  / ╲   / ╲

 2   4 1   7



- '15' is larger than 7, so it switches the place.



Round 2:   16

        /       ╲

     '15'         10

     /  ╲       /  ╲

   8    14      9   3

  / ╲   / ╲

 2   4 1   7



- '15' is larger than 14, so it switches the place.





Round 3:   16

        /       ╲

     '15'         10

     /  ╲       /  ╲

   8    14      9   3

  / ╲   / ╲

 2   4 1   7



Since '15' is lesser than 16. Done.





- Implement a heap tree using a dynamic allocation.

*/