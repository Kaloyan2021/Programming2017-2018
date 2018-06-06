#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
    int n1, n2, n3;
}num;

int main(){
    int n;
    num threeNum;
    FILE *fptr;
    fptr = fopen("program.txt","wb");
    if (fptr  == NULL){
        perror("Error:");
        exit(1);
    }
    scanf("%d",&n);
    threeNum.n1 = n;
    threeNum.n2 = 5*n;
    threeNum.n3 = 5*n + 1;
    fwrite(&threeNum, sizeof(threeNum), 1, fptr);
    fclose(fptr);

    return 0;
}
