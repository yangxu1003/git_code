#include <stdio.h>
#pragma warning (disable:4996)
//һ��Ǯ��һƿ��ˮ��������ƿ��һƿ��ˮ��20��Ǯ�ȶ���ƿ��

int fun(int money)
{
	int empty = money;
	int sum = money;
	while (empty > 1) {
		money = empty / 2;//���Ի���ƿ��
		empty = empty % 2 + empty / 2;//��ƿ������
		sum = sum + money;//����
	}
	return sum;
}
int main()
{
	int money;
	printf("�������money��");
	scanf("%d", &money);
	int result = fun(money);
	printf("%d", result);
	return 0;
}