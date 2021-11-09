// 2. my_memcpy [Normal]
#include <iostream>
using namespace std;

void* my_memcpy(void* destination, const void* source, size_t num);

int main()
{
	char csrc[] = "Hello!";
	char cdst[16];

	int isrc = 12345678;
	int idst;

	my_memcpy(cdst, csrc, sizeof(csrc));
	my_memcpy(&idst, &isrc, sizeof(isrc));

	cout << cdst << endl;
	cout << idst << endl;

}


void* my_memcpy(void* destination, const void* source, size_t num) {
	
	char* tmp_dst = (char*)destination; // 格利瘤狼 林家蔼
	const char* tmp_src = (char*)source; // 家胶狼 林家蔼

	while (num--)
		*(tmp_dst++) = *(tmp_src++);
	return tmp_dst;

}
