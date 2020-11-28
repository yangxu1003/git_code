#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)
int main()
{
	int r = 0;
	printf("enter r:");
	scanf("%d", &r);
	double sum = 0.5;
	double a = 1;
	double b = 2;
	double i = 1.0;
	double j = 1.0;
	double s = 0.5;
	double last = 1.0;
	 do {
		i = i * a / b;//第一个括号的数
		a += 2;
		b += 2;
		j = 1.0 / a;//第二个数
		s = s * pow(0.5, 2);//第三个数
		last = i * j * s;
		sum = sum + last;
	 } while (last > 1e-10);
	printf("%10.9lf", sum * 6 * r * r);
	
	return 0;
}