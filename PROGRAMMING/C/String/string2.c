#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char names[1000][21], s[100], s2[100];
    int n = 0, ok, a=0;
    //
    //how many ' ' and how many s1 in s
    gets(s);
    gets(s2);
    for (int i = 0; s[i] != 0; i++){
        if (s[i] == ' ') n++;
    }
    printf("\n Intervals %d",n);
    if(strlen(s) > strlen(s2)){
        for (int i = 0; s[i] != 0; i++){
            ok = 1;
            for (int j = 0; s2[j] != 0; j++){
                if (s[i+j] != s2[j]) ok = 0;
            }
            if(ok) a++;
        }
    }
    printf("\n How many times s2 in s -> %d", a);
    //finish
    //namesOfAClass
    //
    //
    //
    printf("\nInput student number -> ");
    scanf("%d",&n);
    scanf("%d");
    for (int i = 0; i < n; i++) gets(names[i]);
    for (int i = 0; i < n; i++) printf("\nPerson %d is with name %s", i + 1, names[i]);
    char h[21];
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n - i; j++){
            if(strcmp(names[j], names[j+1]) > 0){
                strcpy(h, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], h);
            }
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++) printf("\nPerson %d is with name %s", i + 1, names[i]);

    return 0;
}
