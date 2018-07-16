#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>

#define maxMrks 100
#define maxSubj 100

FILE *myFileR, *myFileW;

void opt(int);

typedef struct{
    char name[100], subj[maxSubj][100], teacher[maxSubj][100], class[1];
    int marks[maxSubj][maxMrks], grade, num, money;
    float avrAll, avrEach[maxSubj][100];
}marksBook;

void main()
{
    marksBook myBook;
    int i = 0, j = 0, z = 0, k = 0, mark;
    char marks;
    printf("\nAsking for name -");
        gets(myBook.name);
    printf("\nAsking for grade - ");
        scanf("%d",&myBook.grade);
    printf("\nAsking for class - ");
        getchar();
        scanf("%c",&myBook.class);
    printf("\nAsking for number - ");
        scanf("%d",&myBook.num);
    //for all subjects input
    while(1){
        printf("\nAsking for subject - ");
            getchar();
            gets(myBook.subj[i]);
        if(strstr(myBook.subj[i],"done")) break;
        printf("\nAsking for teacher - ");
            gets(myBook.teacher[i]);
        j = -1;
        do{
            j++; //Marks For Each Subject
            z++; //Marks For All Subjects
            printf("\n\tAsking for mark %d - ", j+1);
            scanf("\n%d", &myBook.marks[i][j]);
            //average for each subj
            myBook.avrEach[i][0] += myBook.marks[i][j];
            //average for all subjects
            myBook.avrAll += myBook.marks[i][j];
            //money
            if(myBook.marks[i][j] == 6) myBook.money += 8;
            else if(myBook.marks[i][j] == 5) myBook.money += 4;
            else if(myBook.marks[i][j] == 3) myBook.money -= 4;
            else if(myBook.marks[i][j] == 2) myBook.money -= 25;
            else myBook.money += 0;
            if(myBook.marks[i][j] < 5) k++;
        }while((myBook.marks[i][j] >= 2 && myBook.marks[i][j] <= 6) && myBook.marks[i][j] != 0);
        i++; //All Subjects
    }
    myBook.avrEach[i][0] /= j+1;
    myBook.avrAll /= z;

    //Output Part(Hard Part)

    printf("\nMarksBook For A Single Turm ");
    printf("\n\n%-24s %d %s No %d", myBook.name, myBook.grade, myBook.class, myBook.num);
    for ( i = 0; !(strstr(myBook.subj[i],"done")); i++){
        printf("%-10s",myBook.subj[i]);
        for (int l = 0; myBook.marks[i][l] != 0; l++) printf("%d ",myBook.marks[i][l]);
    }
    if (k > 0) printf("\nYou can make it better with %s", myBook.subj[i]);
    else printf("\nYou're fine for now, keep the good work up");
    if(myBook.avrAll > 5.5) printf("\nHave scholarship");
    else printf("\nYou don't have scholarship");
}

/*
void opt(int choice){
    if(choice == 1) printf("\n > 1.New\n   2.Add\n   3.Exit");
    else if(choice == 2) printf("\n   1.New\n > 2.Add\n   3.Exit");
    else printf("\n   1.New\n   2.Add\n > 3.Exit");
}
switch(choice){
    case 1:
        //New
        break;
    case 2:
        //Add
        break;
    case 3:
        //Exit
        break;
    }
*/
