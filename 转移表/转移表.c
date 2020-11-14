#include <stdio.h>
#pragma warning (disable:4996)

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	if (y == 0) {
		return -1;
	}
	return x / y;
}

void Menu()
{
	printf("#####################\n");
	printf("##1.Add       2.Sub##\n");
	printf("##3.Mul       4.Div##\n");
	printf("###### 5.exit ########\n");
	printf("Please Enter:");
}

int main()
{
	int x =0;
	int y =0;
	int(*p[5])(int x,int y) = {0,Add,Sub,Mul,Div};
	int select = 0;
	while (!select) {
		Menu();
		scanf("%d", &select);
		if (select == 5) {
			break;
		}
		if (select < 1 || select>4) {
			printf("Enter Error,Try again!\n");
			continue;
		}
		else {
			printf("Enter x,y:");
			scanf("%d,%d", &x,&y);
			printf("%d\n", (*p[select])(x, y));
		}
	}
	return 0;
}