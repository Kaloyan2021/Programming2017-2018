#include<stdio.h>
#include<stdlib.h>
#define max 20

int main(){
    int n, intArr[max], a;

    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d", &intArr[i]);
    }
    scanf("%d", &a);


    //Sorted List
    for (int i = 0; i < n; i++){
        if (a < intArr[i]) {
            printf("Not found");
            break;
        }else if(a == intArr[i]){
            printf("Found");
        }else printf("Not found");
    }

    //Not Sorted List
    for (int i = 0; i < n; i++){
        if (a == intArr[i]) {
            printf("Found");
        }
    }
    return 0;
}
