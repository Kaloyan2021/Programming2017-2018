#include<stdio.h>
#include<string.h>
int main()
{
    char b[20];
    int i, ok=1;

    gets(b);
    printf("%s", b);
    printf("\n%d",strlen(b));
    int n =strlen(b);
    for(i=0; i < n -1 ;i++)
    {
        if(b[i] != b[n-i-1])
        {
            printf("\nNoPalind");
            ok=0;
            break;
        }
    }
    if(ok==1)
    {
        printf("Palind");
    }
    return 0;
}
