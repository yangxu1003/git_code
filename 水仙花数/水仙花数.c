#include <stdio.h>
#pragma warning(disable:4996)

//��ӡ0��100000֮���ˮ�ɻ�����ˮ�ɻ�����һ��nλ��������ÿ��λ����n�η�֮�ͣ�
int Num(int i)
{
	int count = 0;//��countͳ��λ��
	while (i > 0) {
		count++;
		i /= 10;
	}
	return count;
}

int fun(int i, int n)
{
	int x = 1;
	int m = i;
	int sum = 0;
	int j = 0;
	while (m > 0) {
		int temp = m % 10;
		m /= 10;
		for (j = n; j > 0; j--) {
			x = x * temp;//��ʾ����λ����n�η�
		}
		sum = sum + x;
		x = 1;
	}
	if (sum == i) {
		return 1;
	}
	else {
		return 0;
	}
}
int main()
{
	for (int i = 0; i < 100000; i++) {
		int n = Num(i);
		int ret = fun(i, n);
		if (ret == 1) {
			printf("%d\n", i);
		}
	}
	return 0;
}