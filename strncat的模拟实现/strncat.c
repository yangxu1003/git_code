#include <stdio.h>
#include <string.h>
char* my_strncat(char* des, const char* src, int num)
{
	char* p = des;
	if (des == NULL && src == NULL) {
		return 0;
	}
	while (*des) {
		des++;
	}
	while (num > 0 && *src) {
		*des++ = *src++;
		num--;
	}
	while (num > 0) {
		*des++ = '\0';
		num--;
	}
	return p;
}
int main()
{
	char des[20] = "abc";
	char src[10] = "123";
	printf("%s",my_strncat(des, src, 5));
	return 0;
}