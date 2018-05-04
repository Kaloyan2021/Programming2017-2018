#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main(){
    int ext,op, max, nowOp;
    op = 1;
    max = 6;
    ext = 0;
    unsigned char c;
    printf("\t\t   Hello world!\n\t We are gathered to see what you need\n Here are your options: ");
    printf("\n > 1.Ascii\n   2.Change A to b and visa versa\n   3.Max of 3\n   4.Max del for N - counted\n   5.Sum from 1 to N\n   Esc to exit");
    do{
        c = getch();
        if(c == 0 || c == 224){
            c=getch();
            if (c == 80){
                if (op < 6) op ++;
                else op = 1;
            }else if (c == 72){
                if (op > 1) op --;
                else op = 6;
            }
            system("cls");
            printf("\t\t   Hello world!\n\t Use arrows to move around\n Here are your options");
            if (op == 1) printf("\n > 1.Ascii");
            else printf("\n   1.Ascii");
            if (op == 2) printf("\n > 2.Change A to b and visa versa");
            else printf("\n   2.Change A to b and visa versa");
            if (op == 3) printf("\n > 3.Max of 3");
            else printf("\n   3.Max of 3");
            if (op == 4) printf("\n > 4.Max del for N - counted");
            else printf("\n   4.Max del for N - counted");
            if (op == 5) printf("\n > 5.Sum from 1 to N");
            else printf("\n   5.Sum from 1 to N");
            printf("\n   Esc to exit");
        }else if(c == 13){
            system("cls");
            nowOp=op;
            switch(nowOp){
            case 1: printf("1"); break;
            case 2: printf("2"); break;
            case 3: printf("3"); break;
            case 4: printf("4"); break;
            case 5: printf("5"); break;
            }
        }
    }while(c != 27);  

    return 0;
}