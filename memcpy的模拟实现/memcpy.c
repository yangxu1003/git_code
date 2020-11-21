#include <stdio.h>
#include <assert.h>
#include <string.h>
void* my_memcpy(void* dst, const void* src, int num)
{
	assert(dst);
	assert(src);
	char* _dst = (char*)dst;
	const char* _src = (char*)src;
	//left->right
	while (num) {
		*_dst = *_src;
		_dst++;
		_src++;
		num--;
	}
	return dst;
}
int main()
{
	char a[] = "abcd1234";
	char b[20] = { 0 };
	my_memcpy(b, a, sizeof(a));
	printf("%s\n", b);
	return 0;
}