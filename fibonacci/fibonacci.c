#include <stdio.h>
#pragma warning (disable:4996)
int Fibonacci(int n)
{
	int first = 1;
	int second = 1;
	int last = 0;
	if (n <= 2) {
		return 1;
	}
	while (n > 2) {
		last = first + second;
		first = second;
		second = last;
		n--;
	}
	return last;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n",Fibonacci(n));
	return 0;
}