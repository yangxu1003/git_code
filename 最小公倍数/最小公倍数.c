#include <stdio.h>

int fun(int a, int b)
{
	int temp;
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;//最大公因数
}

int main()
{
	int a;
	int b;
	scanf_s("%d %d", &a, &b);
	//最小公倍数=a*b/最大公因数
	printf("%d", a * b / fun(a, b));
	return 0;
}