#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>



FILE *marksFileR, *marksFileW;

void myMarksOut(char *);
void myMarksInp(char *);
void myOpt(int);

typedef struct
{
    char name[20], subj[30];
    int marks[100], subjNumb;
    float avr;
}myM;

void main()
{
    myM Turm2, Turm1;
    int op = 1, choice = 1;
    char c, marksFile[40];
    printf("\n Path - ");
    gets(marksFile);
    if(!(strstr(marksFile,".bin"))) exit(1);

    printf("\n\t\t\tUse Up/Down Arrows to Begin")
    do{ //menu to say what you want(KEYBOARD)
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
        if(c == 's')
        {
            if (op < 3) op++;
            else op = 1;
        }
        else if(c == 'w')
        {
            if(op > 1) op--;
            else op = 3;
        }
        if (c == 49)// '49' == 1
        {
            system("cls");
            myMarksInp(marksFile); //Inputing marks and subjects
        }
        else if (c == 50)// 2
        {
            system("cls");
            myMarksOut(marksFile); //Outputing marks(average included) for each subject
            getch();
        }
        else if (c == 51)//3/52/53/54/55/58
        {
            system("cls");
            exit(1);
        }
        if(c == 13)
        {
            choice = op;
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
                default: perror("Switch Error");
            }
        }
        else printf("\nWOW");


    }while(1);
}

void myOpt(int op) //given options
{
    if (op == 1) printf("\n > 1.ADD\n   2.VIEW\n   3.EXIT");
    else if (op == 2) printf("\n   1.ADD\n > 2.VIEW\n   3.EXIT");
    else printf("\n   1.ADD\n   2.VIEW\n > 3.EXIT");
}


void myMarksInp(char *filename)
{
    myM s[100];
    int j, i = 0;
    marksFileW = fopen(filename,"wb");
    while(1)
    {
        strcpy(s[i].name, "Kaloyan");
        printf("\n Input Subject Number ");
        scanf("%d", &s[i].subjNumb);
        if (s[i].subjNumb == 0) break;
        printf("\n Input Subject Name - ");
        getchar();
        gets(s[i].subj);
        printf("\n Input Mark %d for %s ", i+1, s[i].subj);
        j = 0;
        while(1)
        {
            scanf("%d", &s[i].marks[j]);
            if(s[i].marks[j] == 0) break;
            s[i].avr += s[i].marks[j];
            j++;
        }
        s[i].avr = s[i].avr / i;
        i++;
    }
    #define maxSubj i
    fwrite(&s, sizeof(s), 1, marksFileW);
    fclose(marksFileW);
}


void myMarksOut(char *filename)
{
    myM s[100];
    int j, i;
    marksFileR = fopen(filename,"rb");
    fread(&s, sizeof(s),1,marksFileR);
    printf("\n%s Has theese marks:\n\n",s[i].name);
    for(i = 0; 0 != s[i].subjNumb; i++)
    {
        printf("\n %-10s - ", s[i].subj);
        for(j = 0;0 != s[i].marks[j];j++)
        {
            printf("  %d;", s[i].marks[j]);
        }
        printf("  %3f", s[i].avr);

    }
    fclose(marksFileR);
}
