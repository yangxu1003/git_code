#include <stdio.h>
char* my_strcpy(char* des,const char* src) {
	char* ret = des;
	while (*src) {
		*des++ = *src++;
	}
	*des = '\0';
	return ret;
}
int main()
{
	char des[20];
	char src[] = "abcdefg";
	char* ret = my_strcpy(des, src);
	printf("%s\n", des);
	return 0;
}