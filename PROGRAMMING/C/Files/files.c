#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *myFileWrite;
FILE *myFileRead;
FILE *myFileAdd;

void myWrite(char *);
void myRead(char *);
void myAdd(char *);



void main(){
    int c;
    char s[100],filename[100];
    int op = 1, choice = 1;
    printf("\n Path - ");
    gets(filename);
    printf("\n\t\t\tUse Up/Down Arrow to Begin");
    do{
        system("cls");
        printf("\n\t\t\tUse Up/Down Arrow to Begin");
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
        }else if(c == 13){
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
                    break;

                case 3:
                    myFileAdd = fopen(filename,"r+");
                    if(myFileAdd)
                    {
                        system("cls");
                        while(!feof(myFileAdd))
                        {
                            if(fgets(s,99,myFileAdd))
                                printf("\n%s",s);
                        }
                        printf("\nYou can Add in %s, write 'end', 'END' or something in between to end writing: \n");
                        do
                        {
                            gets(s);
                            if(strstr(s,"END"))break;
                            if(strstr(s,"end"))break;

                            if(strstr(s,"End"))break;
                            if(strstr(s,"ENd"))break;
                            if(strstr(s,"EnD"))break;

                            if(strstr(s,"eNd"))break;
                            if(strstr(s,"ENd"))break;
                            if(strstr(s,"eND"))break;

                            if(strstr(s,"enD"))break;
                            if(strstr(s,"nND"))break;
                            if(strstr(s,"EnD"))break;

                            fprintf(myFileAdd,"%s\n",s);
                        }while(1);
                        //}
                        fclose(myFileAdd);
                    }else perror("ERROR in oppening file");
                    break;

                case 4:
                    system("cls");
                    printf("\nChoose a Path to your file");
                    gets(filename);
                    break;

                case 5:
                    exit(1);
                case 6:
                    system("shutdown /s");
                    exit(1);
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
        if(!feof(myFileRead)) printf("Nothing in this file, Sorry, try something else");
        while(!feof(myFileRead))
        {
            if(fgets(s,99,myFileRead))
                printf("\n%s",s);
        }

        fclose(myFileRead);
    }perror("ERROR in oppening file");
    getch();
}
void myWrite(char *filename)
{
    char s[100];
    myFileWrite = fopen(filename,"w");
    if(myFileWrite)
    {
        printf("Write what you wish to write, to end write 'end', 'END' or something in between or simply");
        printf("\n");
        do
        {
            gets(s);
            if(strstr(s,"END"))break;
            if(strstr(s,"end"))break;

            if(strstr(s,"End"))break;
            if(strstr(s,"ENd"))break;
            if(strstr(s,"EnD"))break;

            if(strstr(s,"eNd"))break;
            if(strstr(s,"ENd"))break;
            if(strstr(s,"eND"))break;

            if(strstr(s,"enD"))break;
            if(strstr(s,"nND"))break;
            if(strstr(s,"EnD"))break;

            fprintf(myFileWrite,"%s\n",s);
        }while(1);
        fclose(myFileWrite);
    }perror("ERROR in oppening file");
}
void myAdd(char *filename)
{
    char s[100];
    
}
