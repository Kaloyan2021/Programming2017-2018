#include <stdio.h>
#include <stdlib.h> 

void fig(int, char);
int fibonachi(int);
float stepen(float, int);

int main(){
    int n, z, b; 
    float c, a;
    char ch;
    
    printf("\nFig: ch = ");
    scanf("%c", &ch);
    printf("\nFig: n = ");
    scanf("%d", &n);
    fig(n,ch);
    
    printf("\n");
    printf("\nStepen: a = ");
    scanf("%f", &a);
    printf("\nStepen: z = ");
    scanf("%d", &z);
    printf("\nOtg stepen: %f",stepen(a,z));
    
    printf("\n");
    printf("\nFibonachi: b = ");
    scanf("%d", &b);
    printf("\nOtg FIB: %d",fibonachi(b));
    

}

void fig(int n, char c){
    int i,k;
    for (i = 1; i <= n; i++){
        for (k = 1; k <= i; k++) printf("%2c", c);
        printf("\n");
    }
    return;
}

float stepen(float a, int n){
    float p=1;
    int m,i;
    if (n >= 0) m=n;
    else m = -n;
    for (i = 1; i <= m; i++) p=p*a;
    if(n<0) return 1/p;
    else return p;
}

int fibonachi(int n){
    int i,a,b,c;
    i=1;
    a=0;
    b=1;
    c=1;
    while(i<n){
        c=a+b;
        a=b;
        b=c;
        i++;
    };
    return c ;
}
