#include <stdio.h>

int fun(int a, int b)
{
	int temp;
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;//�������
}

int main()
{
	int a;
	int b;
	scanf_s("%d %d", &a, &b);
	//��С������=a*b/�������
	printf("%d", a * b / fun(a, b));
	return 0;
}