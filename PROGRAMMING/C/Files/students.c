#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

FILE *myFileR, *myFileW;

typedef struct
{
    char name[20];
    int numb, marks[30][5], avr;
}student;



void main()
{
    int i = 0, choice, biggest, m;
    char eldest[20];
    student s[100], max;
    do{
        system("cls");
        printf("\n1. for input\n2. for read\n3. for exit");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                myFileW = fopen("file.txt", "wb");
                while(1)
                {
                    printf("\nInput numb");
                    scanf("%d", &s[i].numb);
                    if (s[i].numb == 0) break;
                    getchar();
                    gets(s[i].name);
                    m = 0;
                    while(1)
                    {
                        scanf("%d", &s[i].marks[m]);
                        if(s[i].marks[m] == 0) break;
                        m++;
                    }
                    i++;
                }

                fwrite(&s,sizeof(s),1,myFileW);
                fclose(myFileW);
                break;
            case 2:
                myFileR = fopen("file.txt","rb");
                fread(&s,sizeof(s),1,myFileR);
                max = s[0];
                for (int z = 1; z < i - 1; z++)
                {
                    if(s[z].year == max.year)
                    {
                        if(s[z].month == max.month)
                        {
                            if(s[z].day < max.day) max = s[z];
                        }
                        else if(s[z].month < max.month) max = s[z];
                    }
                    else if(s[z].year < max.year) max = s[z];
                }

                fclose(myFileR);

                printf("\n %s is the eldest", max.name);
                getch();
                break;
            case 3:
                exit(1);
        }

    }while(1);
}
