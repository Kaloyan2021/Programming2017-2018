#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    int n = strlen(s), ok = 0;
    for (int i = 0; i < n; ++i)
    {
        if (!(49 <= s[i] && 57 >= s[i])) break;
        else ok = 1;
    }
    printf("%d", ok);
    return 0;
}