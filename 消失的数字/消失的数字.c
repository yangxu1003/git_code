#include <stdio.h>
//求和相减
//int missingNumber(int* nums, int numsSize) {
//    int sum = 0, i;
//    for (i = 1; i < numsSize + 1; i++)
//    {
//        sum += i - nums[i - 1];
//    }
//    return sum;
//
//}

//位运算
int missingNumber(int* nums, int numsSize) {
    int k = numsSize;
    for (int i = 0; i < numsSize; i++) {
        k ^= nums[i];
        k ^= i;
    }
    return k;
}
int main()
{
    int arr[] = { 5,1,3,4,0 };
    int num = missingNumber(arr, sizeof(arr) / sizeof(arr[0]));
    printf("%d\n", num);
	return 0;
}