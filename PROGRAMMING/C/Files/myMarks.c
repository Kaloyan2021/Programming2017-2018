#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>



FILE *marksFileR, *marksFileW;

void myMarksOut(char *);
void myMarksInp(char *);
void myOpt(int);

typedef struct
{
    char name[20];
    char subj[30];
    int marks[100], subjNumb;
}myM;

void main()
{
    myM Turm2, Turm1;
    int op = 1;
    char c, marksFile[40];
    printf("\n Path - ");
    gets(marksFile);
    getchar();
    do{ //menu to say what you want(KEYBOARD)
        //system("cls");
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
            myMarksInp(marksFile); //Inputing marks and subjects
        }
        else if (c == 50)// 2
        {
            system("cls");
            myMarksOut(marksFile); //Placing marks(average included) for each subject
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
                    myMarksInp(marksFile); //Inputing marks and subjects
                    break;

                case 2:
                    system("cls");
                    myMarksOut(marksFile); //Placing marks(average included) for each subject
                    getch();
                    break;

                case 3:
                    system("cls");
                    exit(1);
            }
        }

    }while(1);
}

void myOpt(int op) //given options
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
}


void myMarksInp(char *filename)
{
    myM s[100];
    int j, i = 0;
    marksFileW = fopen(filename,"wb");
    while(1)
    {
        strcpy(s[i].name, "Kaloyan");
        printf("\n Input Subject Number");
        scanf("%d", &s[i].subjNumb);
        if (s[i].subjNumb == 0) break;
        printf("\n Input Subject Name - ");
        gets(s[i].subj);
        printf("\n Input Mark for %s", s[i].subj);
        j = 0;
        while(1)
        {
            scanf("%d", &s[i].marks[j]);
            if(s[i].marks[j] == 0) break;
            j++;
        }
        i++;
    }
    fwrite(&s, sizeof(s), 1, marksFileW);
    fclose(marksFileW);
}


void myMarksOut(char *filename)
{
    myM s[100];
    int j, i = 0;
    marksFileR = fopen(filename,"rb");
    fread(&s, sizeof(s),1,marksFileR);
    while(s[i].subjNumb != 0)
    {
        printf("\n %s - ", s[i].subj);
        while(0 != s[i].marks[j])
        {
            printf("  %d;", s[i].marks[j]);
        }
    }
    fclose(marksFileR);
}

/*

typedef struct
{
    char name[20];
    char subj;
    int marks[100];
}myM;

*/
