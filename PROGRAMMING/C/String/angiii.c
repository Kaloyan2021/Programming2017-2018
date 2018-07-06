#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000], r;
    int i, c = 0 ;
    printf("Input a string\n");
    gets(s);
    c = strlen(s);
    for (i = 0; i < c/2; i++)
    {
        r = s[i];
        s[i] = s [c - i - 1];
        s[c - i - 1] = r;
    }
    printf("\n%s", s);
    return 0;
}
