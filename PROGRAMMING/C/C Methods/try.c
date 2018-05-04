#include <stdio.h>
#define sz 300
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, key, j, arr[sz];
        for(int i=0;i<sz;i++) arr[i]=rand();

    for (i = 1; i < sz; i++)
    {
        key = arr[i];
        j = i-1;
  
        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
    for (i = 0; i < sz; i++) printf("%d\n",arr[i]);
    getch();
    return 0;
}
