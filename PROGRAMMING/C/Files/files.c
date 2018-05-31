#include <stdio.h>
#include <stdlib.h>
#include <string>

FILE *myFile;

void opt(int *);

void main(){
    char filename[100], s[100];
    int *pos;
    opt(&pos);
    printf("I'm asking for a path to your file");
    gets(filename);
    myFile = fopen(filename,"r");
    if(myFile){
        switch(pos)
        {
            case 1:
                myFile = fopen(filename,"w");
                if(fgets(s,99,myFile))
                {
                    gets(s);
                    fprintf(myFile,"%s",s);
                }
                fclose(myFile);
                break;
            case 2:
                while(!feof(myFile))
                {
                    if(fgets(s,99,myFile)) 
                        printf("%s",s);
                }
                fclose(myFile);
                break;
            case 3:
                break;  

        }
    }
    else printf("Error occured in trying to open %s",filename);
    fclose(myFile);
    gets(filename);
    f = fopen(filename);




}

void opt(int *pos){
    int c;
    int op = 1;
    do{
        system("cls");
        printf("\n\t\t\tUse Up/Down Arrow to Begin");
        
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
            }
            else if(c == 80)
            {
                if(op > 1) op -= 1;
                else op = 3;
            }
        }
    }while(c! = 10 || c != 27);
    pos = op;
}