#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){//ax+b=0, a and b inputed from client in one line of string, summed N
    int j, n;
    char *p;
    float  a, b, x = 0.0;
    char strin[1000][100], hsrin[100], ret;
    scanf("%d",&n);
    getchar();
    for (int i = 0; i < n; i++) gets(strin[i]);
    for (int k = 0; k < n; k++)
    {
        p=strstr(strin[k],"a=");
        if(p) a=atof(p+2);
        p=strstr(strin[k],"b=");
        if(p) b=atof(p+2);
        if(a == 0) printf ("\nEvery X is solution");
        else if (b == 0) printf("\nX = %lf",x);
        else{ 
            x = (-b)/a;
            printf("\nX = %lf", x);
        }
        
        //printf("\nA = %f; B = %f",a,b);
    }


    return 0;
}
