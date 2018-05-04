#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define br 100


int main()
{
    int a, n, k, h = 0, i, j = 0;
    int list[br];
    do{
        printf("n: ");
        scanf("%d", &n);
    }while(n < 0 || n > 100);

    for (i = 0; i <n; i++){
        printf("a:");
        scanf("%d", &a);
        list[i] = a;
    }

    do{
        printf("k:");
        scanf("%d", &k);
    }while(k < 2 || k > n);

    for (i = 0; i <= n + 1 - k; i++){
        j=1;
        for (int m = i + 1; m < i + k ; m++)
        {
            if (list[i] == list[m]) j = j + 1;
            else break;
            if (j == k) h=h+1;
        }
    }

    printf("%d", h);
    getch();
    return 0;
}