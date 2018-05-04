#include<stdio.h>
#include<stdlib.h>
#define max 100

void swap(int *, int *);
void arr_in(int *, int);
void arr_sort(int *, int);
void merge(int *, int, int *, int, int *);

int main(){
    int m, n, a[max], b[max], c[max];
    printf("Vuvedi n, m i sled tova samite cifri suotvetno za masivite");
    scanf("%d", &n);
    scanf("%d", &m);
    printf("\n");
    arr_in(a, n);
    printf("\n");
    arr_in(b, m);
    arr_sort(a, n);
    arr_sort(b, m);
    merge(a, n, b, m, c);
    //for (int i = 0; i < n; i++) printf("%d\n",a[i]);
    //for (int i = 0; i < n; i++) printf("%d\n",b[i]);
    return 0;
}

void arr_in(int *arr, int n){
    for(int i = 0; i < n; i++) scanf("%d",&arr[i]);
}

void arr_sort(int *a, int n){
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            if (a[j] > a[j + 1]){
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

void merge(int *arr,int n,int *brr,int m,int *crr){
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    // Merging starts
    while (i < n && j < m) {
        if (arr[i] <= brr[j]) {
            crr[k] = arr[i];
            i++;
            k++;
        } else {
            crr[k] = brr[j];
            k++;
            j++;
        }
    }

    /* Some elements in array 'arr' are still remaining
    where as the array 'brr' is exhausted */

    while (i < n) {
        crr[k] = arr[i];
        i++;
        k++;
    }

    /* Some elements in array 'brr' are still remaining
    where as the array 'arr' is exhausted */

    while (j < m) {
        crr[k] = brr[j];
        j++;
        k++;
    }

    //Displaying elements of array 'crr'
    printf("\nCrr -> ");
    for (i = 0; i < n + m; i++) printf("%d ", crr[i]);
}
