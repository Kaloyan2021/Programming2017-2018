#include <stdio.h>
#include <stdlib.h>
#include <string>

FILE *f;

void yes_nochoose(int *);

void main(){
    char filename[char];

    gets(filename);
    f = fopen(filename);




}

void yes_nochoose(int *ok){
    int c;
    int op = 1;
    do{
        system("cls");
        printf("\n\t\t\tUse Up/Down Arrow to Begin");
        /*for (int z = 0; z < n; z++){
            printf("\n %3d %-41s ", s[ z ].num, s[ z ].name);
            for (int i = 0; i < m; i++){
                printf("%3d",s[ z ].marks[ i ]);
            }
            printf("%6.2f", s[ z ].avr);
        }
        printf("\n\t\t\tUse arrows to choose Yes or No");
        */
        if (op == 1)
        {
            printf("\n > Write");
            printf("\n   Read");
            printf("\n   EXIT");
        }
        else if (op == 2)
        {
            printf("\n   Write");
            printf("\n > Read");
            printf("\n   EXIT");
        }
        else
        {
            printf("\n   Write");
            printf("\n   Read");
            printf("\n > EXIT");
        }
        c = getch();
        if(c == 0 || c == 224)
        {
            c = getch();
            if(c == 72)
            {
                if(op < 3) op += 1;
                else op = 1;
            }else if(c == 80)
            {
                if(op > 1) op -= 1;
                else op = 3;
            }
        }
    }while(c! = 10 || c != 27);