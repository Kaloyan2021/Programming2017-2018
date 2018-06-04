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
void myOpt(int op);




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
                    getch();
                    break;

                case 3:
                    system("cls");
                    myAdd(filename);
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
    char s[100];
    int k;
    myFileWrite = fopen(filename,"w");
    if(myFileWrite)
    {
        printf
        (
            "Write what you wish to write, to end write 'end','END' or something in between"
        );
        printf("\n");
        do
        {
            gets(s);
            if(strstr(s,"END"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileWrite,"%s",s);
                break;
            }
            else if(strstr(s,"end"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileWrite,"%s",s);
                break;
            }

            else if(strstr(s,"End"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileWrite,"%s",s);
                break;
            }
            else if(strstr(s,"ENd"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileWrite,"%s",s);
                break;
            }
            else if(strstr(s,"EnD"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileWrite,"%s",s);
                break;
            }

            else if(strstr(s,"eNd"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileWrite,"%s",s);
                break;
            }
            else if(strstr(s,"ENd"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileWrite,"%sn",s);
                break;
            }
            else if(strstr(s,"eND"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileWrite,"%s",s);
                break;
            }

            else if(strstr(s,"enD"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileWrite,"%s",s);
                break;
            }
            else if(strstr(s,"nND"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileWrite,"%s",s);
                break;
            }
            else if(strstr(s,"EnD"))
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
    char s[100];
    int k;
    myFileAdd = fopen(filename,"a+"); // it can be also with a+
    if(myFileAdd)
    {
        system("cls");
        myRead(filename);
        do
        {
            gets(s);
            if(strstr(s,'\n')) fprintf(myFileWrite,"\n");            
            if(strstr(s," END"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileAdd,"%s",s);
                break;
            }
            else if(strstr(s," end"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileAdd,"%s",s);
                break;
            }

            else if(strstr(s," End"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileAdd,"%s",s);
                break;
            }
            else if(strstr(s," ENd"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileAdd,"%s",s);
                break;
            }
            else if(strstr(s," EnD"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileAdd,"%s",s);
                break;
            }

            else if(strstr(s," eNd"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileAdd,"%s",s);
                break;
            }
            else if(strstr(s," ENd"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileAdd,"%s",s);
                break;
            }
            else if(strstr(s," eND"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileAdd,"%s",s);
                break;
            }

            else if(strstr(s," enD"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileAdd,"%s",s);
                break;
            }
            else if(strstr(s," eND"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileAdd,"%s",s);
                break;
            }
            else if(strstr(s," EnD"))
            {
                k = strlen(s);
                s[k-3] = '\0';
                fprintf(myFileAdd,"%s",s);
                break;
            }

            fprintf(myFileAdd,"%s",s);
        }while(1);
        //}
        fclose(myFileAdd);
    }else perror("ERROR in oppening file");
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

