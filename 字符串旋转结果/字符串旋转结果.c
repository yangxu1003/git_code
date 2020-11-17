#include <stdio.h>
#include <string.h>
void rotate(char* s1,int k)
{
	while (k != 0) {
		char* s = s1;
		char temp = *s;
		while ((*(s + 1)) != '\0') {
			*s = *(s + 1);
			s++;
		}
		*s = temp;
		k--;
	}
}
int judge(char* s1, char* s2)
{
	int len = strlen(s1);
	if (strlen(s1) != strlen(s2)) {
		return 0;
	}
	else {
		for (int i = 0; i < len; i++) {
			rotate(s1, 1);
			if (strcmp(s1, s2) == 0) {
				return 1;
			}
		}
		return 0;
	}
}
int main()
{
	char s1[] = "abcdef";
	char s2[] = "defabd";
	printf("%d", judge(s1, s2));
	return 0;
}