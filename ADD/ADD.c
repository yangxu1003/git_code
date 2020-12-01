#include <stdio.h>
#pragma warning (disable:4996)
int Add(int num1, int num2)
{
	int sum;
	while (num2 != 0) {
		sum = num1 ^ num2;
		num2 = (unsigned)(num1 & num2) << 1;
		num1 = sum;
	}
	return num1;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d,%d", &num1, &num2);
	printf("sum:%d",Add(num1, num2));
	return 0;
}