#include <stdio.h>
#include <conio.h>
#define len 100

int main()
{
    int op, ok, wrng, a, c, br;
    char str[len];
    do{
        op = 0;
        ok = 0;
        wrng = 0;
        a = 0;
        br = 0;
        c = 1;
        printf("Input - >");
        scanf("%s", str);
        printf("%s\n",str);
        for (int i = 0; str[i] != 0; i++) {
            if(str[i] == '(') op++;
            else op--;;
            if(str[0] == '(') ok = 1;
        }

        if(ok == 1 && op == 0) ok = 2;
        
        if(ok!=2) printf("\nNot ok\n");
        
        if (ok == 2){
            for (int i = 0; str[i] != 0; i++){
                if (str[i] == '(') {
                    a++;
                    br = 1;
                }else{
                    printf("%d - %d", a, i+1);
                    printf("\n");
                    c++;
                    if (br > 1){
                        a = i - c;//?????????????????????????????????
                        c++;
                    }else a=i+1;
                    br++;
                    
                }
            }

        }else wrng = 1;
    }while(wrng == 1);

    getch();
    return 0;
}
// a = 1
// 0 1 2 3 4 5 6 7 8  9 10 11
// ( ) ( ) ( ) ( ( (  )  )  )
// 0 1
// 2 3
// 4 5
// 6 11
// 7 10
// 8 9
//
//
//






