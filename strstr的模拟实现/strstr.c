#include <stdio.h>
#include <assert.h>
const char* my_strstr(const char* str, const char* sub_str)
{
	assert(str);
	assert(sub_str);
	const char*p = str;
	const char* q = sub_str;
	while (*p != '\0') {
		const char* start = p;//确定起始位置
		while (*p && *q && *p == *q) {
			p++;
			q++;
		}
		if (*q == '\0') {
			return start;
		}
		q = sub_str;
		p = start + 1;
	}
	return NULL;
}
int main()
{
	const char* str = "123 abc 1234 abcd";
	const char* sub_str = "1234";
	printf("%s\n", my_strstr(str, sub_str));
	return 0;
}