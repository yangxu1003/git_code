#include <stdio.h>
#pragma warning (disable:4996)
/*
  @param rotateArray int整型一维数组
  @param rotateArrayLen int rotateArray数组长度
  @return int整型
 */
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
    int left = 0;
    int right = rotateArrayLen - 1;
    int mid;
    if (rotateArrayLen == 0)
        return 0;
    while (left < right)
    {
        mid = left + ((right - left) >> 1);
        if (rotateArray[mid] > rotateArray[right]) {
            left = mid + 1;
        }
        else if (rotateArray[mid] < rotateArray[right]) {
            right = mid;
        }
        else {
            right--;
        }
    }
    return rotateArray[left];
}
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d,", &a[i]);
    }
    int minimum = minNumberInRotateArray(a,5);
    printf("%d\n", minimum);
    return 0;
}