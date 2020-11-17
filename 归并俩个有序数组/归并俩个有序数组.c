#include <stdio.h>
void merge(int* A, int m, int* B, int n) {
    int k = m + n - 1;
    int i = m - 1;
    int j = n - 1;
    while (i >= 0 && j >= 0) {
        if (A[i] > B[j]) {
            A[k--] = A[i--];
        }
        else {
            A[k--] = B[j--];
        }
    }
    while (j >= 0) {
        A[k--] = B[j--];
    }
    while (i >= 0) {
        A[k--] = A[i--];
    }
}
int main() {
    int A[100] = { 2,4,5,7,9 };
    int B[] = { 1,2,4,6,8,10,23 };
    merge(A,5,B,7);
    for (int i = 0; i < 12; i++) {
        printf("%d ",A[i]);
    }
    return 0;
}