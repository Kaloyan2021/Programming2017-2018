#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define maxStuds 30
#define maxSubj 20

int main()
{
    unsigned char v;
    int marks[maxStuds][maxSubj], schShip[maxStuds], rptClass[maxStuds], nowOp, op;
    int numbStuds, numbSubj, schShipCounter, rptClassCounter, c, c1, conNum, singStud, typeMeth;
    float avrClassMark,avrSubjMark, avrStudMark, res, singStudAvr;
    do {
        avrStudMark = 0;
        avrClassMark = 0;
        avrSubjMark = 0;
        rptClassCounter = 0;
        schShipCounter = 0;
        singStudAvr = 0;
        conNum = 0;
        nowOp = 1;
        c = 0;
        c1 = 0;
        system("cls");
        printf("\n\tThis is a program for average grades of a class for each student, for the whole class and for each subject\n");
        do {
            printf("\nInput students index -> ");
            scanf("%d",&numbStuds);
        }while(numbStuds < 1 || numbStuds > maxStuds);
        do {
            printf("\nInput subjects index -> ");
            scanf("%d",&numbSubj);
        }while(numbSubj < 1 || numbSubj > maxSubj);
        printf("\n\n");
        //Input marks
        for(int i = 0; i < numbStuds; i++){
            for(int j = 0; j < numbSubj; j++){
                do{
                    printf("\nInput mark for subject %d of student %d - ",j+1,i+1);
                    scanf("%d",&marks[i][j]);
                }while (marks[i][j] < 2 || marks[i][j] > 6);
                avrClassMark += marks[i][j];
            }
            printf("\n\n");
        }
        avrClassMark = avrClassMark/(numbStuds* numbSubj);
        printf("\n \n \n");
        //Menu Arrows
        printf("Use arrows to move around");
        do{
            v = getch();
            if(v == 0 || v == 224){
                v = getch();
                if (v == 80){
                    if (op < 2) op ++;
                    else op = 1;
                }else if (v == 72){
                    if (op > 1) op --;
                    else op = 2;
                }
                system("cls");
                printf("\n\tThis is a program for average grades of a class for each student, for the whole class and for each subject\n");
                printf("\n    Choose:");
                if(op == 1) printf("\n > Table");
                else printf("\n   Table");
                if(op == 2) printf("\n > Single");
                else printf("\n   Single");
                printf("\n   Esc to exit");
            }else if(v == 13){
                system("cls");
                printf("\n\tThis is a program for average grades of a class for each student, for the whole class and for each subject\n");
                nowOp=op;
                switch(nowOp){
                    case 1: 
                        printf("\n\n");
                        //Table :
                        //Line_first
                        for(int j = 0; j < numbSubj; j++) printf("\tSub %d ",j+1);
                        printf("\tAvrStMark");
                        printf("\n");
                        //Line_numbStuds
                        for(int i = 0; i < numbStuds; i++) {
                            avrStudMark = 0;
                            printf("Std %d\t",i+1);
                            for(int j = 0; j < numbSubj; j++) {
                                printf("%d\t",marks[i][j]);
                                avrStudMark += marks[i][j]; 
                            }
                            res = avrStudMark/numbSubj;
                            printf("%.2f",res);
                            printf("\n");
                            //for (int n = 0; n < numbSubj; n++){
                            if (res > 5.49) {
                                schShip[c] = i+1;
                                schShipCounter = schShipCounter + 1 ;
                                c++;
                            }
                            else if (res < 3.00) {
                                rptClass[c1] = i+1;
                                rptClassCounter = rptClassCounter + 1;
                                c1++;
                            }
                        }    
                        printf("AvrSb\t");
                        for(int j = 0; j < numbSubj; j++){
                            avrSubjMark = 0;
                            for(int i = 0; i < numbStuds; i++) avrSubjMark += marks[i][j];{
                                res = avrSubjMark/numbStuds;
                                printf("%.2f\t",res);
                            }
                        }
                        printf("%.2f",avrClassMark);
                        printf("\n\n");
                        //Extention
                        for (int n = 0; n < schShipCounter; n++) printf("\nStudent %d is getting scholarship. Congratulations!", schShip[n]);
                        printf("\n");
                        for (int n = 0; n < rptClassCounter; n++) printf("\nStudent %d is repeating the year. Try harder this time!", rptClass[n]);
                        printf("\n\n");
                        printf("Click arrow to go back");break;
                    case 2:
                        //For_Single_Student
                        do{
                            printf("\nWhich student would you like to see again? ");
                            scanf("%d",&singStud);
                        }while(singStud<1 || singStud>numbStuds);
                        printf("\nFor student %d all his marks are:\n",singStud);
                        for (int j = 0; j < numbSubj; j++){
                            printf("\nSubject %d - mark %d", j+1, marks[singStud - 1][j]);
                            singStudAvr += marks[singStud - 1][j];
                        }
                        printf("\nAverage mark for this student is %.2f", singStudAvr/numbSubj);
                        //Extention
                        for (int n = 0; n < schShipCounter; n++) printf("\nStudent %d is getting scholarship. Congratulations!", schShip[n]);
                        printf("\n");
                        for (int n = 0; n < rptClassCounter; n++) printf("\nStudent %d is repeating the year. Try harder this time!", rptClass[n]);
                        printf("\n\n");
                        printf("Click arrow to go back");break;
                }
            }   
        }while(v != 27);
        system("cls");
        printf("\n\tThis is a program for average grades of a class for each student, for the whole class and for each subject\n");
        printf("\nDo you want to continue?\n");
        printf("\n\t > 1.Yes");
        printf("\n\t   2.No");
        do{
            v = getch();
            if(v == 0 || v == 224){
                v = getch();
                if (v == 80){
                    if (op < 2) op ++;
                    else op = 1;
                }else if (v == 72){
                    if (op > 1) op --;
                    else op = 2;
                }
                system("cls");
                printf("\n\tThis is a program for average grades of a class for each student, for the whole class and for each subject\n");
                printf("\nDo you want to continue?\n");
                if(op == 1) printf("\n\t > 1.Yes \n\t   2.No");
                else printf("\n\t   1.Yes \n\t > 2.No");
            }
        }while(v != 13);
        nowOp = op;  
        switch(nowOp){
            case 1: conNum = 1; break;
            case 2: break;
        }
    
    }while(conNum!=0);
    return 0;
}