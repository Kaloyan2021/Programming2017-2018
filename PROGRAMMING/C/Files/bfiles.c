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
    myFileWriteB = fopen("bfile.txt","wb");
    tst s[maxStud], r[maxStud];
    int k,l, j[maxStud], i = 0, op = 0, l;
    char c;
    while(i < 101){
        s[ i ].avr = 0;
        printf("\nNomer na uchenika - ");
        scanf("%d",&s[i].num);
        getchar();
        if(s[i].num == 0) break;// break if number of student is 0
        printf("\nName of studend with No %d - ", s[i].num);
        gets(s[i].name);
        j[i] = 0;
        do{
            printf("\nVuvedi ocenka %d na %s - ", j[i] + 1, s[i].name);
            scanf("%d",&s[i].marks[j[i]]);
            if (s[i].marks[j[i]] == 0) break;
            if (j[i] >= maxSubj) break;
            s[i].avr = s[i].avr + s[i].marks[j[i]];
            j[i]++;
        }while(1);
        s[i].avr = s[i].avr / j[i];
        i++;
    }
    l = i;
    for (;i != 0; i--){
            printf("\n %3d %-41s ", s[i].num, s[i].name);
            for (; j[i] != 0; j[i]--){
                printf("%3d",s[i].marks[j[i]]);
            }
            printf("%6.2f", s[i].avr);
    }
    fwrite(&s, sizeof(s), 1, myFileWriteB);
    //for (; i != 0; i--)
    //{
    //    for (k = s[i].marks[j]; j != 0; j--)
    //    {

    //    }
    //}
    fclose(myFileWriteB);
    myFileReadB = fopen("bfile.txt","rb");
    fread(&)
}


