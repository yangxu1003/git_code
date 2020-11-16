#include <stdio.h>
#pragma warning (disable:4996)
int Findnum(int arr[3][3], int row, int col, int k)
{
	int i = 0;
	int j = col - 1;
	//找右上角对比，最后对比的情况一直向左下角收缩，
	while (i < row && j >= 0) {
		if (arr[i][j] > k) {
			j--;
		}
		else if (arr[i][j] < k) {
			i++;
		}
		else {
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
	int input = 0;
	scanf("%d", &input);
	int ret = Findnum(arr, 3, 3, input);
	if (ret == 1) {
		printf("found it!\n");
	}
	else {
		printf("not fount!\n");
	}
	return 0;
}