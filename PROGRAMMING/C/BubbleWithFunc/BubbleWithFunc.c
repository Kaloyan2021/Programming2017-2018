#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define maxlst 100

void arrIn(int *a, int n);
void arrSort(int *a, int n);
void arrOut(int *a, int n);
void swap(int *a, int *b);
int myMathFunc(float a, float b, float c, float *px1, float *px2);

int main(){
    int sl, arr[100], n;
    float a,b,c,x1,x2;
    printf("\nInput a, b, c -> ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    sl = myMathFunc(a,b,c,&x1,&x2);
    switch(sl){
        case 1: printf("\n No solution"); break;
        case 2: printf("\n Every x"); break;
        case 3: printf("\n x = %f",x1); break;
        case 4: printf("\n No real roots"); break;
        case 5: printf("\n x1 = %f x2 = %f",x1,x2); break;
    }
    printf("\nInput n ->");
    scanf("%d", &n);
    arrIn(arr, n);
    arrSort(arr, n);
    arrOut(arr, n);
    return 0;
}

void arrIn(int *a, int n){
    for (int i = 0; i < n; i++){
        printf("Input some numbers");
        scanf("%d",&a[i]);
    }
}

void arrOut(int *a, int n){
    for (int i = 0; i < n; i++) printf("\n%d",a[i]);
}

void arrSort(int *a, int n){
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            if (a[j] < a[j + 1]){
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}
void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int myMathFunc(float a, float b, float c, float *px1, float *px2){
    float d;
    if (a == 0){
        if (b == 0){
            if (c == 0) return 2;
            else return 1;
        }else{
            *px1 = -c/b;
            return 3;
        }
    }else{
        d = b * b - 4 * a * c;
        if (d < 0) return 4;
        else {
            *px1 = (- b - sqrt(d)) / (2 * a);
            *px2 = (- b + sqrt(d)) / (2 * a);
            return 5;
        }
    }
}



