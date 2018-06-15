#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

FILE *marksFileR, *marksFileW;

typedef struct
{
    char name[20];
    int BG[20],     AE[20], 
        MATH[20],   INF[20], 
        IT[20],     HIST[20], 
        GEO[20],    PL[20], 
        BIO[20],    PHIS[20], 
        CHEM[20],   PE[20], 
        EEI[20],    EE[20], 
        TD[20],     PROGR[20];
}myM;

void main()
{
    myM Turm2, Turm1;
    int op;
    char c,marksFile[20];
    printf("\n Path - ");
    gets(marksFile);
    do{
        system("cls");
        printf("\n\t\t\tUse Up/Down Arrow to Begin");
        myOpt(op);
        c = getch();
        if(c == 0 || c == 224)
        {
            c = getch();
            if(c == 80)
            {
                if(op < 3) op++;
                else op = 1;
            }
            else if(c == 72)
            {
                if(op > 1) op--;
                else op = 3;
            }
        }
        if (c == 49)// '49' == 1
        {
            system("cls");
            myMarksInp(marksFile);
        }
        else if (c == 50)// 2
        {
            system("cls");
            myMarksOut(marksFile);
            getch();
        }
        else if (c == 51)//3
        {
            system("cls");
            exit(1);
        }
        if(c == 13)
        {
            int choice = op;
            switch(choice)
            {

                case 1:
                    system("cls");
                    myMarksInp(marksFile);
                    break;

                case 2:
                    system("cls");
                    myMarksOut(marksFile);
                    getch();
                    break;

                case 3:
                    system("cls");
                    exit(1);
            }
        }

    }while(1 /*choice != 5*/);
}

void myOpt(int op)
{
    if (op == 1)
    {
        printf("\n > 1.ADD");
        printf("\n   2.VIEW");
        printf("\n   5.EXIT");
    }
    else if (op == 2)
    {
        printf("\n   1.ADD");
        printf("\n > 2.VIEW");
        printf("\n   3.EXIT");
    }
    else
    {
        printf("\n   1.ADD");
        printf("\n   2.VIEW");
        printf("\n > 3.EXIT");
    }
]