#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define maxMrks 100
#define maxSubj 100

FILE *myFileR, *myFileW;

void opt(int);

typedef struct{
    char name[100], subj[maxSubj][100], teacher[maxSubj][100], class[2];
    int marks[maxSubj][maxMrks], grade, num, money;
    float avrAll, avrEach[maxSubj][100];
}marksBook;

void main()
{
    marksBook myBook;
    int i = 0, j = 0, z = 0, k++, mark;
    while(myBook.subj[i] != 0){
        printf("\nAsking for name -");
        
        printf("\nAsking for grade - ");
        
        printf("\nAsking for class - ");
        
        printf("\nAsking for number - ");
        
        printf("\nAsking for subject - ");
        
        printf("\nAsking for teacher - ");
        
        j = 0;
        while(myBook.marks[i][j] != 0){
            printf("\nAsking for mark - ");
            scanf("%d",myBook.marks[i][j]);
            myBook.avrEach[i][0] += myBook.marks[i][j];
            myBook.avrAll += myBook.marks[i][j];
            j++;
            z++;
            if(myBook.marks[i][j] == 6) myBook.money += 8;
            else if(myBook.marks[i][j] == 5) myBook.money += 4;
            else if(myBook.marks[i][j] == 3) myBook.money -= 4;
            else if(myBook.marks[i][j] == 2) myBook.money -= 25;
            else myBook.money += 0;
            if(myBook.marks[i][j] < 5) k++;
        }
        if (k < 0) printf("You can make it better with %s", myBook.subj[i]);
        myBook.avrEach[i][0] /= j+1;
        i++;
    }
    myBook.avrAll /= z;
    if(myBook.avrAll > 5.5) printf("\nHave scholarship");
}

void opt(int choice){
    if(choice == 1) printf("\n > 1.New\n   2.Add\n   3.Exit");
    else if(choice == 2) printf("\n   1.New\n > 2.Add\n   3.Exit");
    else printf("\n   1.New\n   2.Add\n > 3.Exit");
}
/*
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