#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define maxSubj 20
#define maxSymb 20
#define maxStud 100


FILE *myFileWriteB, *myFileReadB;
typedef struct{
    int num, marks[maxSubj];
    char name[maxSymb];
    float avr;
}tst;

void main(){
    myFileWriteB = fopen("bfile.bin","wb");
    tst s[maxStud], r[maxStud];
    int k,l, j[maxStud], i = 0, op = 0;
    char c;
    while(i < 101){ //input name and number
        s[i].avr = 0;
        printf("\nNomer na uchenika - ");
        scanf("%d",&s[i].num);
        getchar();
        if(s[i].num == 0) break; // break if number of student is 0
        printf("\nName of studend with No %d - ", s[i].num);
        gets(s[i].name);
        j[i] = 0;
        do{ //input marks
            printf("\nVuvedi ocenka %d na %s - ", j[i] + 1, s[i].name);
            scanf("%d",&s[i].marks[j[i]]);
            if (s[i].marks[j[i]] == 0) break;
            if (j[i] >= maxSubj) break;
            s[i].avr = s[i].avr + s[i].marks[j[i]];
            j[i]++;
        }while(1);
        s[i].avr = s[i].avr / j[i]; //find average
        i++; //next student
    }
    l = i;
    fwrite(&s, sizeof(s), 1, myFileWriteB);
    fclose(myFileWriteB);


    int spaces = j[0];
    for (int counter = 1; counter < i - 1; counter++)
        if(j[counter] > spaces) spaces = j[counter];
    myFileReadB = fopen("bfile.bin","rb");
    fread(&r, sizeof(r), 1, myFileReadB);

    for (int z = 0; z < l; z++){
        printf("\n %3d. %-41s ", r[z].num, r[z].name);
        for (i = 0; i < spaces; i++){
            if (r[z].marks[i] == 0) printf(" - ");
            else
                printf("%3d",r[z].marks[i]);
        }
        printf("%6.2f", r[z].avr);
    }

}


