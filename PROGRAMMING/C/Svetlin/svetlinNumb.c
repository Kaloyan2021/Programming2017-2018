#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    int n = strlen(s), ok = 1;
    for (int i = 0; i < n; i++)
    {
        if (!(s[i] >= 49 && s[i] <= 57)){
            ok = 0;
            break;
        }
    }
    printf("%d", ok);
    return 0;
}
