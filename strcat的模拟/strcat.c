#include <stdio.h>
char* my_strcat(char* des,const char* src)
{
	char* ret = des;
	while (*des) {
		des++;
	}
	while (*src) {
		*des++ = *src++;
	}
	return ret;
}
int main()
{
	char des[64] = "abcdef";
	char src[] = "123456";
	printf("%s", my_strcat(des, src));
	return 0;
}