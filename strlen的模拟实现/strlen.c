#include <stdio.h>
int my_strlen(const char* str)
{
	const char* p = str;
	while (*p != '\0') {
		p++;
	}
	return p - str;
}
int main()
{
	char str[] = "abcdef";
	my_strlen(str);
	printf("%d\n", my_strlen(str));
	return 0;
}