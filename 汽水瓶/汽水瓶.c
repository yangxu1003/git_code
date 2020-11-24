#include <stdio.h>
#pragma warning (disable:4996)
//一块钱买一瓶汽水，俩个空瓶换一瓶汽水，20块钱喝多少瓶？

int fun(int money)
{
	int empty = money;
	int sum = money;
	while (empty > 1) {
		money = empty / 2;//可以换的瓶数
		empty = empty % 2 + empty / 2;//空瓶的数量
		sum = sum + money;//总数
	}
	return sum;
}
int main()
{
	int money;
	printf("输入你的money：");
	scanf("%d", &money);
	int result = fun(money);
	printf("%d", result);
	return 0;
}