#include <stdio.h>
//ц╟ещеепР
void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void BubbleSort(int *arr, int len)
{
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
int main()
{
	int arr[] = { 88,44,11,66,77,99,15,24 };
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, len);
	for (int i = 0; i < len ; i++) {
		printf("%d ", arr[i]);
	}
}