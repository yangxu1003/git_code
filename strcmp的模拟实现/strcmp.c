#include <stdio.h>
int my_strcmp(const char* str1, const char* str2)
{
	int result = 0;
	while (*str1 != '\0'&&(*str1 == *str2)) {
		str1++;
		str2++;
	}
	if (*str1 < *str2) {
		return -1;
	}
	else if (*str1 > * str2) {
		return 1;
	}
	else {
		return 0;
	}
}
int main()
{
	char str1[10] = "abcdef";
	char str2[10] = "abcde";
	printf("%d", my_strcmp(str1, str2));
	return 0;
}