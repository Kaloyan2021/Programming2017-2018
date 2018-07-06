#include <stdio.h>
#include <string.h>
void main()
{
    int i,n,n1,n2,p;
    char s1[100], s2[100];
    gets(s1);
    gets(s2);
    n1=strlen(s1);
    n2=strlen(s2);
    if(n1>n2) n = n1;
    else n = n2;
    for(i=0; i<n; i++)
    {
        if(s1[i]==s2[i]) p=2;
        else if(s1[i]<s2[i]) p=0;
        else p=1;
    }
    printf("\n%d",p);

}
