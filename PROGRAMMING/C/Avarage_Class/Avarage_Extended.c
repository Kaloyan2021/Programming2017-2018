#include <stdio.h>
#include <conio.h>
#define maxStuds 30
#define maxSubj 20

int main()
{
    int marks[maxStuds][maxSubj], schShip[maxStuds], rptClass[maxStuds];
    int numbStuds, numbSubj, schShipCounter, rptClassCounter, c, c1;
    float avrClassMark,avrSubjMark, avrStudMark, res;
    do
    avrStudMark = 0;
    avrClassMark = 0;
    avrSubjMark = 0;
    rptClassCounter = 0;
    schShipCounter = 0;
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
            schShipCounter = schShipCounter + 1;
            c++;
        }
        else if (res < 3.00) {
            rptClass[c1] = i+1;
            rptClassCounter = rptClassCounter + 1;
            c1++;
        }
    }
    //Line_last
    printf("AvrSb\t");
    for(int j = 0; j < numbSubj; j++){
        avrSubjMark = 0;
        for(int i = 0; i < numbStuds; i++){
            avrSubjMark += marks[i][j];
        }
        res = avrSubjMark/numbStuds;
        printf("%.2f\t",res);
    }
    printf("%.2f",avrClassMark);
    printf("\n\n\n");
    for (int n = 0; n < schShipCounter; n++){

        printf("\nStudent %d is getting scholarship. Congratulations!\n", schShip[n]);

    }
    printf("\n");
    for (int n = 0; n < rptClassCounter; n++) {    

        printf("\nStudent %d is repeating the year. Try harder this time!", rptClass[n]);

    }





    getch();
    return 0;
}
