#include <stdio.h>


void arr_in(int *, int);
int bin(int *, int, int, int, int);
void arr_out(int *, int);



int main(){
    int arr[100], n, a;
    scanf("%d", &n);
    scanf("%d", &a);
    arr_in(arr, n);
    arr_out(arr, n);
    if(bin(arr, n, 0, n-1 ,a)) printf("\nFound it");
    else printf("was not found");
    return 0;
}

void arr_in(int *arr, int n){
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
}

void arr_out(int *arr, int n){
    for(int i = 0; i < n; i++) printf("%d", arr[i]);
}

int bin(int *arr, int n, int lowest, int highest, int a){
    while (lowest <= highest)
    {
        int mid = lowest + (highest-lowest)/2;//

        if (arr[mid] == a)  return 1;
        if (arr[mid] < a)   lowest = mid + 1;
        else    highest = mid - 1;
    }
    return 0;


}
