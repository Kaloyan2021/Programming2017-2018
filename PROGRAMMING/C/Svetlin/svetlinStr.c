#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int c, i, na, nb, k, ok, checked = 0;
    char b[100], a[100];
    gets(a);
    gets(b);
    na = strlen(a);
    nb = strlen(b);
    for(i = 0; i < nb; i++){
        if(a[0] == b[i]){
            checked = 1;
            for (k = 1, c = i + 1; k < na; k++, c++){
                if(a[k] == b[c]){                
                ok = 1;                
                }
                else
                {
                    ok = 0;
                    break;
                } 
            }
        }
        if(checked == 0) ok = 0;
    }
    printf("%d", ok);
}