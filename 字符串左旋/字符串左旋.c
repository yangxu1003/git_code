#include <stdio.h>
#pragma warning (disable:4996)
#include <string.h>
void LeftRotate(char str[], char D[], int len, int K)
{
    K %= len;
    char* d = D;
    char* s = str;
    while (*d)
    {
        d++;
    }
    while (*s)
    {
        *d++ = *s++;
    }
    while (len--)
    {
        printf("%c", *(D + (K++)));
    }
    printf("\n");
}
int main()
{
    char str[100] = { 0 };
    printf("ÊäÈë×Ö·û´®£º");
    fgets(str, sizeof(str) - 1, stdin);
    str[strlen(str) - 1] = '\0';
    char data[64];
    int k = 0;
    int size = strlen(str);
    strcpy(data, str);
    printf("Ïò×óĞı×ªk¸ö×Ö·û:");
    scanf("%d", &k);
    LeftRotate(str, data, size, k);
    return 0;
}