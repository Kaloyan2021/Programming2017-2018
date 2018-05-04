#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define br 100


int main()
{
    int a, n, k, h = 0, i, m;
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
        m=0;
        for (int j = 1; j < k ; j++)
        {
            if (list[i] == list[j + i]) m = m + 1;
            else break;
        }
        if (m == k - 1) h = h + 1;
    }

    printf("%d", h);
    getch();
    return 0;
}