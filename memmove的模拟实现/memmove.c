#include <stdio.h>
#include <assert.h>
#include <string.h>
void* my_memmove(void* dst, const void* src, int num)
{
	assert(dst);
	assert(src);
	char* _dst = (char*)dst;
	const char* _src = (char*)src;
	if (_dst > _src && _dst < _src + num) {
		// right->left
		_dst = _dst + num - 1;
		_src = _src + num - 1;
		while (num) {
			*_dst = *_src;
			_dst--;
			_src--;
			num--;
		}
	}
	else {
		//left->right
		while (num) {
			*_dst = *_src;
			_dst++;
			_src++;
			num--;
		}
	}
	return dst;
}
int main()
{
	char buff[] = "abcd1234";
	my_memmove(buff, buff+1, strlen(buff)+1);
	printf("%s\n", buff);
	return 0;
}