#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char names[1000][21], s[100], s2[100];
    int n = 0, ok, a=0;
    //printf("\nInput student number -> ");
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
    return 0;
}
