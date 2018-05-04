#include<stdio.h>
#include<time.h>

int  main()
{
    clock_t start_t, end_t;
    start_t = clock();
        
    end_t = clock();
    total_t = (double) (end_t - start_t);
    printf("clock : %ld", total_t);
    return 0;
}