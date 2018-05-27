#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define maxbru 30
#define maxbrp 20

typedef struct{
    int num, marks[maxbrp];
    char name[maxbru];
    float avr;
    }tst;

void srtN(tst *, int, int);
void srtD(tst *, int, int);
void main(){
    tst s[maxbru];
    int n, m, i;
    printf("Vuvedi uchenici ( <= 30) ");
    scanf("\n%d",&n);
    printf("vuvedi predmeti ( <= 20) ");
    scanf("\n%d",&m);
    for (i = 0; i < n; i++){
        s[ i ].avr = 0;
        printf("\nUchenika e s nomer - ");
        scanf("%d",&s[ i ].num);
        getchar();
        printf("\nUchenik %d, name - ", s[ i ].num);
        gets(s[ i ].name);
        for (int j = 0; j < m; j++){
            printf("\nVuvedi na uchenik %d ocenka %d ",s[ i ].num, j+1);
            scanf("%d",&s[ i ].marks[ j ]);
            s[ i ].avr = s[ i ].avr + s[ i ].marks[ j ];
        }
        s[ i ].avr = s[ i ].avr / m;
    }
    char c;
    int op = 0;
    i = 0;
<<<<<<< HEAD
    system("cls");
    do{
        printf("Use Up/Down Arrow to Begin");
=======
    /*do{
        system("cls");
>>>>>>> b586fb6470c4a0d7069c9cc98ad44569f6ff6cd8
        c = getch();
            if(c==0 || c == 224){
                c = getch();
                if(c == 80){
                    if(op < 2) op++;
                    else op = 1;
                }else if(c == 72){
                    if(op > 1) op --;
                    else op = 2;
                }
            }//
            //system("cls");
            if (op == 1) printf("\n > Use the Method of Name Sorting");
            else printf("\n   Use the Method of Name Sorting");
            if (op == 2) printf("\n > Use the Method of Number Sorting");
            else printf("\n   Use the Method of Number Sorting");
    }while(c!=13);
    switch(op){
       case 2: srtD(s, n, m); break;
    }*/
    //case 1:
    srtN(s, n, m); //break;
    int ok = 1;
    for (int z = 0; z < n; z++){
        printf("\n %3d %-41s ", s[ z ].num, s[ z ].name);
        for (i = 0; i < m; i++){
            printf("%3d",s[ z ].marks[ i ]);
        }
        printf("%6.2f", s[ z ].avr);
    }
}

void srtN(tst *s1, int n, int m){
    tst s2;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if(strcmp(s1[j].name, s1[j+1].name) > 0){
                s2 = s1[j];
                s1[j] = s1[j+1];
                s1[j+1] = s2;
            }
        }
    }
}

void srtD(tst *s1, int n, int m){
    tst s2;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - n; j++)
        {
<<<<<<< HEAD
            if (s1[i].num > s1[j].num)
            {
                s2 = s1[i];
                s1[i] = s1[j];
                s1[j] = s2;
=======
            if (s1[j].num > s1[j + 1].num)
            {
                s2 = s1[j];
                s1[j] = s1[j + 1];
                s1[j + 1] = s2;
>>>>>>> b586fb6470c4a0d7069c9cc98ad44569f6ff6cd8
            }
        }
    }
}








