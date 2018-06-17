#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int i, n1;
    gets(a);
    n1 = strlen(a);
    for(i = 0; i < n1; i++) b[i] = a[i];
    b[n1] = 0;
    printf("%s",b);
    return 0;
}