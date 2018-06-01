#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *myFile;

int opt();

void main(){
    char filename[100], s[100];
    int op;
    printf("I'm asking for a path to your file");
    gets(filename);
    myFile = fopen(filename,"r");
    op = opt();
    if(myFile){
        switch(op)
        {
            case 1:
                /*
                fclose(myFile);
                myFile = fopen(filename,"w");
                if(fgets(s,99,myFile))
                {
                    printf("\nWhat is that you want to be saved.");
                    gets(s);
                    fprintf(myFile,"%s",s);
                }*/
                break;
            case 2:
                fclose(myFile);
                myFile = fopen(filename,"r");
                while(!feof(myFile))
                {
                    if(fgets(s,99,myFile))
                        printf("%s",s);
                }
                break;
            case 3:
                break;

        }
    }
    else printf("Error occured in trying to open %s",filename);
    fclose(myFile);
}
int opt(){
    int c;
    int op;
    printf("\n\t\t\tUse Up/Down Arrow to Begin");
    do{

        c = getch();
        if(c == 0 || c == 224)
        {
            c = getch();
            if(c == 80)
            {
                if(op < 3) op += 1;
                else op = 1;
            }
            else if(c == 72)
            {
                if(op > 1) op -= 1;
                else op = 3;
            }
        }
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

    }while(c != 13/* || c != 27*/);
    return op;
}