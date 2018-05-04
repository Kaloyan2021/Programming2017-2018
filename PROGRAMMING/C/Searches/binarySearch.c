#include <stdio.h>
#include <stdlib.h>
#define max 100
int ok = 0;
int finder(int *intArr, int n, int a);

int main()
{
    int first, last, mid,n, a, intArr[max];

    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter %d integers\n", n);
    for (int i = 0; i < n; i++) scanf("%d",&intArr[i]);
    printf("Enter to be found\n");
    scanf("%d", &a);

    //Solved with Iteration
    first = 0;
    last = n - 1;
    mid = n/2;
    while (first <= last) {
        if (intArr[mid] == a) {
            printf("Found\n");
            break;
        }
        else if (intArr[mid] < a) first = mid + 1;
        else last = mid - 1;

        mid = (first + last)/2;
    }
    if (first > last) printf("Not found\n");


    int found = finder(&intArr[0], n, a);
    if (found) printf("Found");
    else printf("Not found");

    return 0;
}

//Solved with Recurcion
int finder(int *intArr, int n, int a){
    if(n == 0) return 0;
    if(a == intArr[n/2]) return 1;
    if(a < intArr[n/2]) return finder(&intArr[0], n/2, a);
    else return finder(&intArr[n/2+1], n/2-1, a);

}
