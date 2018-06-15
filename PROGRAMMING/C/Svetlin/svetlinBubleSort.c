#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, a[100], b, i, c;
    printf("Broi chiska:");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Vuvedi chislo");
        scanf("%d", &a[i]);
    }
    a[i+1] = 1;
    for(b=0; b<n; b++)
    {
        for(i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                c=a[i];
                a[i]=a[i+1];
                a[i+1]=c;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }




}
