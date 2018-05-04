#include <stdio.h>
#include <conio.h>
#define maxStuds 30
#define maxSubj 20

int main()
{
    int marks[maxStuds][maxSubj], schShip[maxStuds], rptClass[maxStuds];
    int numbStuds, numbSubj, schShipCounter, rptClassCounter, c, c1, conNum, singStud, typeMeth;
    float avrClassMark,avrSubjMark, avrStudMark, res, singStudAvr;
        do {
        avrStudMark = 0;
        avrClassMark = 0;
        avrSubjMark = 0;
        rptClassCounter = 0;
        schShipCounter = 0;
        singStudAvr = 0;
        c = 0;
        c1 = 0;
        do {
            printf("\nInput students index -> ");
            scanf("%d",&numbStuds);
        }while(numbStuds < 1 || numbStuds > maxStuds);
        do {
            printf("\nInput subjects index -> ");
            scanf("%d",&numbSubj);
        }while(numbSubj < 1 || numbSubj > maxSubj);
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
        do{
            printf("\nWhich type do you want to use ('1' for all students/'0' for single student)?");
            scanf("%d", &typeMeth );
            if(typeMeth!=1 && typeMeth!=0) printf("\nWrong value, use only '1' for all students and '0' for single");
        }while(typeMeth!=1 && typeMeth!=0);

        if(typeMeth == 1){
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
            //Line_last//TABLE
            printf("AvrSb\t");
            for(int j = 0; j < numbSubj; j++){
                avrSubjMark = 0;
                for(int i = 0; i < numbStuds; i++) avrSubjMark += marks[i][j];
                res = avrSubjMark/numbStuds;
                printf("%.2f\t",res);
            }
            printf("%.2f",avrClassMark);
            printf("\n\n");

        }else{


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
        }    
    
        //Extention
        for (int n = 0; n < schShipCounter; n++) printf("\nStudent %d is getting scholarship. Congratulations!", schShip[n]);
        printf("\n");
        for (int n = 0; n < rptClassCounter; n++) printf("\nStudent %d is repeating the year. Try harder this time!", rptClass[n]);
        printf("\n\n");
        //do{}while();
        do{
            printf("\nDo you wanna to continue('1' for yes/'0' for no)");
            scanf("%d",&conNum);
            if(conNum!=1 && conNum!=0) printf("\nWrong value, use only '1' for agreement and '0' for disagreement");
        }while(conNum!=1 && conNum!=0);    

    
    }while(conNum!=0);



    return 0;
}
