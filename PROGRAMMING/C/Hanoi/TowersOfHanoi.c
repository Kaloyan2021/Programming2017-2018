#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char s, char d, char m);

void main()
{
    int n;
    scanf("%d", &n);
    hanoi(n,65,67,66);
}
void hanoi(int n, char s, char d, char m)
{
    if (n == 1)
    {
        printf("\n %c to %c", s, d);
        return;
    }
    hanoi(n-1, s, m, d);
    printf("\n %c to %c", s, d);
    hanoi(n-1, m, d, s);
}
