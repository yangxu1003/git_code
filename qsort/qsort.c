#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compint(const void*_xp,const void*_yp,int size)
{
	int* xp = (int*)_xp;
	int* yp = (int*)_yp;
	if (*xp > *yp) {
		return 1;
	}
	else if (*xp < *yp) {
		return -1;
	}
	else {
		return 0;
	}
}
void Print(int *arr, int num)
{
	for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int Compstr(const void* _xp, const void* _yp, int size)
{
	char* xp = *(char**)_xp;
	char* yp = *(char**)_yp;
	return strcmp(xp, yp);//1 0 -1
}
int main()
{
	int arr[] = { 11,56,35,12,35,88,45,23,33 };
	int num = sizeof(arr) / sizeof(arr[0]);
	Print(arr, num);
	qsort(arr, num, sizeof(int), compint);
	Print(arr, num);
	return 0;
}