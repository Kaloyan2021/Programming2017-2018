#include <stdio.h>
#include <conio.h>
#define max_n 100

int main()
{
    int a[max_n], i, j, b, c = 0, k, n;
    do {
        scanf("%d", &n);
    }while(n<10 || n>max_n);
    scanf("%d",&k);
    for (i=0; i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - k + 1;  i++){
        b=0;
        for(j = 0; j<k;j++){
            b=b+a[j+i];
        }
        if(b%k==0) c++;
    }
    printf("%d",c);

    getch();
    return 0;
}