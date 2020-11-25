#include <stdio.h>
#include <stdlib.h>
char* my_strncpy(char* des, const char* src,int num) {
	char* ret = des;
	while ( num > 0 && *src) {
		*des++ = *src++;
		num--;
	}
	while (num > 0) {
		*des++ = '\0';
		num--;
	}
	return ret;
}
int main()
{
	char des[20] = {0};
	char src[] = "abc123";
	char* ret = my_strncpy(des, src,10);
	printf("%s\n", des);
	return 0;
}