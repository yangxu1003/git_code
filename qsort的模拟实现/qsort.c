#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int CompInt(const void *xp,const void *yp)
{
	int *a = (int *)xp;
	int *b = (int *)yp;
	if (*a > * b) {
		return 1;
	}
	else if (*a < *b) {
		return -1;
	}
	else {
		return 0;
	
	}
}
void Print(int* arr, int num)
{
	for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void swap(char* s, char* d, int size) {
	while (size) {
		char temp = *s;
		*s = *d;
		*d = temp;
		size--;
		s++;
		d++;
	}
}
void my_qsort(void* arr, int num, int size, int (*comp)(const void*, const void*)) {
	assert(arr != NULL);
	assert(comp != NULL);
	char* a = (char*)arr;
	for (int i = 0; i < num-1; i++) {
		int flag = 0;
		for (int j = 0; j < num - 1 - i; j++) {
			if (comp(a+j*size,a+(j+1)*size) > 0) {
				flag = 1;
				swap(a + j * size, a + (j + 1) * size,size);//½»»»×Ö½Ú
			}
		}
		if (flag == 0) {
			break;
		}
	}
}
int main()
{
	int arr[] = { 23,26,3,57,1,68,48,79,10 };
	int num = sizeof(arr) / sizeof(arr[0]);
	Print(arr, num);
	my_qsort(arr, num, sizeof(int), CompInt);
	Print(arr, num);
	
	return 0;
}