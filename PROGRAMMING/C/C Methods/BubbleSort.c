#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 30000

int main()
{
    float arr[size], sorted, tmp;
    for(int i = 0; i < size; i++) arr[i] = rand();
    //sorting
    for (int i = 1; i < size; i++){
        sorted = 1;
        for (int j=0; j<size-i;j++){
            if(arr[j]<arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<size;i++) printf("\n%f",arr[i]);
    getch();
    return 0;
}
