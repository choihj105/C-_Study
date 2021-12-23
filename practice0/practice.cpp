#include <iostream>
using namespace std;

void* my_memcpy(void* dest, const void* src, size_t num) {
	char* tmp_dst = (char*)dest;
	char* tmp_src = (char*)src;

	while (num--) {
		*(tmp_dst++) = *(tmp_src++);
	}
	return tmp_dst;
}


char* my_strcat(char* c1, char* c2)
{
	char* ptemp = c1;
	
	if (c1 == NULL || c2 == NULL) return NULL;

	while (*ptemp) ptemp++;
	while (*c2) *(ptemp++) = *(c2++);

	*ptemp = '\0';
	return ptemp;


}

int main()
{

	char csrc[] = "Hello";
	char cdst[16];

	int isrc = 12345678;
	int idst;

	my_memcpy(cdst, csrc, sizeof(csrc));
	my_memcpy(&idst, &isrc, sizeof(isrc));

	cout << cdst << endl;
	cout << idst << endl;




}