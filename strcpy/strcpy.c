#include <stdio.h>

void mystrcpy(char* p,char* a)
{
    while (*a) {
        *a = *p;
        a++;
        p++;
    }
}
int main()
{
    char* p = "abcdef";
    char a[] = "      ";
    mystrcpy(p,a);
    printf("%s", a);
    return 0;
}