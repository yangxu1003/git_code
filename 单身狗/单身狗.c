#include <stdio.h>
int main()
{
	int arr[] = { 1,2,5,6,3,3,1,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int j;
	for (int i = 0; i < len - 1; i++) {
		int k = 1;
		for (j = 0; j < len; j++) {
			if (arr[i] != arr[j]) {
				j++;
			}
			else {
				k = 0;
			}
		}
		if (j == len && k == 1) {
			printf("%d\n", arr[i]);
		}
	}
	return 0;
}