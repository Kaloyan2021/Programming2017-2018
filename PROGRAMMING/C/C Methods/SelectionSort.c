#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


#define sz 30000
int main(){
    int min,arr[sz],p;
    float tmp;
    for(int i = 0; i < sz; i++){
        arr[i]=rand();
   }
    for(int i = 0; i < sz; i++){
        p = i;
        min = arr[i];
        for(int j = i+1; j < sz; j++){
            if(arr[j]<min){
                min=arr[j];
                p=j;
            }
        }
        tmp = arr[i];
        arr[i] = min;
        arr[p] = tmp;
    }
    for(int i = 0; i < sz; i++) printf("%d\n",arr[i]);
    getch();
    return 0;
}