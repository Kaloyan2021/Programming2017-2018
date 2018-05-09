#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char names[1000][21], s[100];
    int n = 0;
    //printf("\nInput student number -> ");
    gets(s);
    //scanf("%d",&n);
    //for (int i = 0; i < n; i++) scanf("%s\n", &names[i]);
    //for (int j = 0; j <= n + 1; j++) printf("%s\n", names[j]);
    for (int i = 0; s[i] != 0; i++){
        if (s[i] == ' ') n++;
    }
    printf("%d",n);


    return 0;
}
