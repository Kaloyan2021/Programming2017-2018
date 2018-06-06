#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

FILE *myFileWrite;
FILE *myFileRead;
FILE *myFileAdd;



void myWrite(char *);
void myRead(char *);
void myAdd(char *);
void myOpt(int );
int checker(char *);









void main(){
    int c, k;
    char s[100], filename[100];
    int op = 1, choice = 1;

    printf("\n Path - ");
    gets(filename);
    printf("\n\t\t\tUse Up/Down Arrow to Begin");
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
                if(op < 6) op++;
                else op = 1;
            }
            else if(c == 72)
            {
                if(op > 1) op--;
                else op = 6;
            }
        }
        if (c == 49)// '49' == 1
        {
            system("cls");
            myWrite(filename);
        }
        else if (c == 50)// 2
        {
            system("cls");
            myRead(filename);
            getch();
        }
        else if (c == 51)//3
        {
            system("cls");
            myAdd(filename);
        }
        else if (c == 52)//4
        {
            system("cls");
            exit(1);
        }
        else if (c == 53)//5
        {
            system("cls");
            system("shutdown /s");
            exit(1);
        }
        if(c == 13)
        {
            choice = op;
            switch(choice)
            {

                case 1:
                    system("cls");
                    myWrite(filename);
                    break;

                case 2:
                    system("cls");
                    myRead(filename);
                    getch();
                    break;

                case 3:
                    system("cls");
                    myAdd(filename);
                    break;

                case 4:
                    system("cls");
                    printf("\nPath -");
                    gets(filename);
                    break;

                case 5:
                    exit(1);

                case 6:
                    system("shutdown /s");
                    exit(1);
                default: printf("ERROR: switch errors");
            }
        }

    }while(1 /*choice != 5*/);
}








void myRead(char *filename)
{
    char s[100];
    myFileRead = fopen(filename,"r");
    if(myFileRead)
    {
        printf("\nYou wished to read from file %s", filename);
        while(!feof(myFileRead))
        {
            if(fgets(s,99,myFileRead))
                printf("\n%s",s);
        }

        fclose(myFileRead);
    }else perror("ERROR in oppening file");
}








void myWrite(char *filename)
{
    char s[100], c;
    int k;
    myFileWrite = fopen(filename,"w");
    if(myFileWrite)
    {
        printf("Write, to end write 'end','END' or something in between\n");
        do
        {
            gets(s);
            if (checker(s))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileWrite,"%s",s);
                break;
            }
            fprintf(myFileWrite,"%s",s);
            }while(1);
        fclose(myFileWrite);
    }else perror("ERROR in oppening file");
}








void myAdd(char *filename)
{
    char p,s[100];
    int k;
    myFileAdd = fopen(filename,"a+"); // it can be also with r+
    if(myFileAdd)
    {
        system("cls");
        myRead(filename);
        do
        {
            gets(s);
            if (checker(s))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileAdd,"%s",s);
                break;
            }
            fprintf(myFileAdd,"%s",s);
            
        }while(1);
        fclose(myFileAdd);
    }else perror("ERROR in oppening file");
}








int checker(char *s)
{
    int k;
    if(strstr(s,"END")) return 1;/*
    else if(strstr(s,"end")) return 1;
    else if(strstr(s,"End")) return 1;
    else if(strstr(s,"ENd")) return 1;
    else if(strstr(s,"EnD")) return 1;
    else if(strstr(s,"eNd")) return 1;
    else if(strstr(s,"ENd")) return 1;
    else if(strstr(s,"eND")) return 1;
    else if(strstr(s,"enD")) return 1;
    else if(strstr(s,"nND")) return 1;
    else if(strstr(s,"EnD")) return 1;*/
}








void myOpt(int op)
{
    if (op == 1)
    {
        printf("\n > 1.Write");
        printf("\n   2.Read");
        printf("\n   3.Add");
        printf("\n   4.Change File Path");
        printf("\n   5.EXIT");
        printf("\n   6.Shutdown the computer");
    }
    else if (op == 2)
    {
        printf("\n   1.Write");
        printf("\n > 2.Read");
        printf("\n   3.Add");
        printf("\n   4.Change File Path");
        printf("\n   5.EXIT");
        printf("\n   6.Shutdown the computer");
    }
    else if (op == 3)
    {
        printf("\n   1.Write");
        printf("\n   2.Read");
        printf("\n > 3.Add");
        printf("\n   4.Change File Path");
        printf("\n   5.EXIT");
        printf("\n   6.Shutdown the computer");
    }
    else if (op == 4)
    {
        printf("\n   1.Write");
        printf("\n   2.Read");
        printf("\n   3.Add");
        printf("\n > 4.Change File Path");
        printf("\n   5.EXIT");
        printf("\n   6.Shutdown the computer");
    }
    else if (op == 5)
    {
        printf("\n   1.Write");
        printf("\n   2.Read");
        printf("\n   3.Add");
        printf("\n   4.Change File Path");
        printf("\n > 5.EXIT");
        printf("\n   6.Shutdown the computer");
    }
    else
    {
        printf("\n   1.Write");
        printf("\n   2.Read");
        printf("\n   3.Add");
        printf("\n   4.Change File Path");
        printf("\n   5.EXIT");
        printf("\n > 6.Shutdown the computer");
    }
}
