#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int n;
	int arr[10][10];
	int j = 0;
	int i = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {//行数
		arr[i][0] = 1;
		printf("%d ", arr[i][0]);
		for (j = 1; j < i; j++) {//列数
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];//每个数等于上面的数加左面的数
			printf("%d ", arr[i][j]);
		}
		if (i == j) {
			arr[i][j] = 1;
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}