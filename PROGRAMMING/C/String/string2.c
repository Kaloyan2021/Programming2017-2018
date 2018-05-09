#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char names[1000][21];
    int n = 0;
    printf("\nInput student number -> ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) scanf("%s\n", &names[i]);
    //for (int j = 0; j < n; j++) printf("%s\n", names[j]);



    return 0;
}
