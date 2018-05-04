#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define size 100000

int main()
{
    int min, p, a, n, b;
    float arrINC[size],arrDEC[size],arrRAND[size],t[size], sorted, tmp, workSec1,workSec2,workSec3,resWT;
    clock_t start_t, end_t, total_t;
    //Rand List
    for(int i = 0; i < size; i++) arrRAND[i]=rand();
    for(int i = 0; i < size; i++) arrINC[i] = i;
    for(int i = 0; i < size; i++) arrDEC[i] = size-1;

    //Selection Sort
    void selecSort(float arr[], int sz){
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
    }
    //Insertion Sort
/*    void insertSort(float arr[], int sz){
    
        for (int i = 1; i < sz; i++){
            a = t [i];
            for (int b=i-1;b>=0;b--){
                if(a < t[b]){
                    t[b+1] = t[b];
                }else break;
            }
            t[b+1]=a;
        }
    }*/

    //
    
    void insertSort(float arr[], int sz){
        for (int i = 1; i < sz; i++)
        {
            int key = arr[i];
            int j = i-1;
    
            /* Move elements of arr[0..i-1], that are
            greater than key, to one position ahead
            of their current position */
            while ( j >= 0 && arr[j] > key)
            {
                arr[j+1] = arr[j];
                j = j-1;
            }
            arr[j+1] = key;
        }
    }

    //

    
    //Bubble Sort
    void bubbleSort(float arr[], int sz){
        for (int i=1; i < sz; i++){
            sorted = 1;
            for (int j=0; j<sz-i;j++){
                if(arr[j]<arr[j+1]){
                    tmp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=tmp;
                }
            }
        }
    }

    //BEGINNING

    //Bubble Sort
    start_t = clock();
    bubbleSort(arrINC,size);
    end_t = clock();
    total_t = (double)( end_t - start_t);
    printf("Bubble sorting inc -> %ld\n",total_t/CLOCKS_PER_SEC);

    start_t = clock();
    bubbleSort(arrDEC,size);
    end_t = clock();
    total_t = (double) (end_t - start_t);
    printf("Bubble sorting dec -> %ld\n",total_t/CLOCKS_PER_SEC);

    start_t = clock();
    bubbleSort(arrRAND,size);
    end_t = clock();
    total_t = (double) (end_t - start_t);
    printf("Bubble sorting rand -> %ld\n",total_t/CLOCKS_PER_SEC);

    //Insertion Sort
    start_t = clock();
    insertSort(arrINC,size);
    end_t = clock();
    total_t = (double)( end_t - start_t);
    printf("Insertion sort inc -> %ld\n",total_t/CLOCKS_PER_SEC);

    start_t = clock();
    insertSort(arrDEC,size);
    end_t = clock();
    total_t = (double) (end_t - start_t);
    printf("Insertion sort dec -> %ld\n",total_t/CLOCKS_PER_SEC);

    start_t = clock();
    insertSort(arrRAND,size);
    end_t = clock();
    total_t = (double) (end_t - start_t);
    printf("Insertion sort rand -> %ld\n",total_t/CLOCKS_PER_SEC);

    //Selection Sort
    start_t = clock();
    selecSort(arrINC,size);
    end_t = clock();
    total_t = (double)( end_t - start_t);
    printf("Selection sort inc -> %ld\n",total_t/CLOCKS_PER_SEC);

    start_t = clock();
    selecSort(arrDEC,size);
    end_t = clock();
    total_t = (double) (end_t - start_t);
    printf("Selection sort dec -> %ld\n",total_t/CLOCKS_PER_SEC);

    start_t = clock();
    selecSort(arrRAND,size);
    end_t = clock();
    total_t = (double) (end_t - start_t);
    printf("Selection sort rand -> %ld\n",total_t/CLOCKS_PER_SEC);
    getch();
    return 0;
}