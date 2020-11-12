#include <stdio.h>
#include <windows.h>

int main()
{
	char arr[] = "             ";
	for (int left = 7, right = 7; (right - left) < 13; left--, right++) {
		arr[left] = '*';
		arr[right] = '*';
		for (int i = 0; i < 14; i++) {
			printf(" %c", arr[i]);
		}
		printf("\n");
	}
	for (int start = 1, end = 13;(end-start)>0; start++, end--) {
		arr[start] = ' ';
		arr[end] = ' ';
		for (int i = 0; i < 14; i++) {
			printf(" %c", arr[i]);
		}
		printf("\n");
	}
	return 0;
}

