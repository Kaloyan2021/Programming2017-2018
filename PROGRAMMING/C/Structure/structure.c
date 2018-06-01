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
int arrowchoose();
void yes_nochoose(int *,tst *, int, int);
void main(){
    tst s[maxbru];
    int ok = 1, n, m, i, op = 0;
    char c;
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
            do{
                scanf("%d",&s[ i ].marks[ j ]);
                if (s[i].marks[j] < 2 || s[i].marks[j] > 6) printf("\nTry again ");
            }while (s[i].marks[j] < 2 || s[i].marks[j] > 6);
            s[ i ].avr = s[ i ].avr + s[ i ].marks[ j ];
        }
        s[ i ].avr = s[ i ].avr / m;
    }
    i = 0;

    system("cls");
    printf("\nUse Up/Down Arrow to Begin");
    do
    {
        switch(arrowchoose())
        {
            case 1:
                srtN(s, n, m); break;
            case 2:
                srtD(s, n, m); break;
        }

        yes_nochoose(&ok, s, n, m);
    }while(ok != 0 );
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
        for (int j = 0; j < n - i; j++)
        {
            if (s1[j].num > s1[j + 1].num)
            {
                s2 = s1[j];
                s1[j] = s1[j + 1];
                s1[j + 1] = s2;
            }
        }
    }
}

int arrowchoose(){
    int c;
    int op = 2;
    do{
        c = getch();
        if(c == 0 || c == 224)
        {
            c = getch();
            if(c == 72)
            {
                if(op < 2) op = 2;
                else op = 1;
            }else if(c == 80)
            {
                if(op > 1) op = 1;
                else op = 2;
            }
        }

        system("cls");
        printf("\n\t\t\tUse arrows to choose a method");
        if (op == 1)
        {
            printf("\n > Use the Method of Name Sorting");
            printf("\n   Use the Method of Number Sorting");
        }
        else
        {
            printf("\n   Use the Method of Name Sorting");
            printf("\n > Use the Method of Number Sorting");
        }

    }while(c!=13);
    return op;
}

void yes_nochoose(int *ok, tst *s, int n, int m){
    int c;
    int op = 2;
    do{
        system("cls");
        printf("\n\t\t\tUse Up/Down Arrow to Begin");
        for (int z = 0; z < n; z++){
            printf("\n %3d %-41s ", s[ z ].num, s[ z ].name);
            for (int i = 0; i < m; i++){
                printf("%3d",s[ z ].marks[ i ]);
            }
            printf("%6.2f", s[ z ].avr);
        }
        printf("\n\t\t\tUse arrows to choose Yes or No");

        if (op == 1)
        {
            printf("\n > Yes");
            printf("\n   No");
        }
        else
        {
            printf("\n   Yes");
            printf("\n > No");
        }
        c = getch();
        if(c == 0 || c == 224)
        {
            c = getch();
            if(c == 72)
            {
                if(op < 2) op = 2;
                else op = 1;
            }else if(c == 80)
            {
                if(op > 1) op = 1;
                else op = 2;
            }
        }

    }while(c!=13);
    if (op == 2) ok = 0;
}




