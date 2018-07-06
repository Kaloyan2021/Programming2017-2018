#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int i, n;
    gets(a);
    n = strlen(a);
    for(i = 0; i < n; i++) b[i] = a[i];
    b[i] = 0;
    printf("%s",b);
    return 0;
}
