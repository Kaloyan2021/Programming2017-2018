#include <stdio.h>
#define sz 30000
#include <conio.h>
#include <stdlib.h>
int main(){
    int a, t[sz], b;
    for(int i=0;i<sz;i++) t[i]=rand();
    
    for (int i = 1; i < sz; i++){
        a = t [i];
        for (int b = i + 1; b < sz; b++){
            if(a < t[b]){
                t[b+1] = t[b];
            }else break;
        }
        t[b+1]=a;
    }
    
    for(int i = 0; i < sz; i++) printf("%d",t[i]);
}