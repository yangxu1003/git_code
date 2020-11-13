#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
//判断100到200之间的素数
int Fun(int n)   
{
	int input = (int)sqrt(n);
	for (int i = 2; i <= input; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main()
{
	int ret = 1;
	for (int i = 100; i <= 200; i++) {
		int ret = Fun(i);
		if (ret == 1) {
			printf("%d\n", i);
		}
	}
	return 0;
}