#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxbru 30
#define maxbrp 20

typedef struct{
    int num, marks[maxbrp];
    char name[maxbru];
    float avr;
    }tst;

void srtN(tst *, int, int);

void main(){
    tst s[maxbru];
    int n, m, i;
    printf("Vuvedi uchenici ( <= 30) ");
    scanf("\n%d",&n);
    printf("vuvedi predmeti ( <= 20) ");
    scanf("\n%d",&m);
    for (i = 0; i < n; i++){
        s[ i ].avr = 0;
        printf("\nUchenika e s nomer - ");
        scanf("%d",&s[ i ].num);
        getchar();
        printf("\nUchenik %d, name - ", s[ i ].num);
        gets(s[ i ].name);
        for (int j = 0; j < m; j++){
            printf("\nVuvedi na uchenik %d ocenka %d ",s[ i ].num, j+1);
            scanf("%d",&s[ i ].marks[ j ]);
            s[ i ].avr = s[ i ].avr + s[ i ].marks[ j ];
        }
        s[ i ].avr = s[ i ].avr / m;
    }
    srtN(s, n, m);
    for (int z = 0; z < n; z++){
        printf("\n %3d %-41s ", s[ z ].num, s[ z ].name);
        for (i = 0; i < n; i++) printf("%3d",s[ z ].marks[ i ]);
        printf("%6.2f", s[ z ].avr);
    }
}

void srtN(tst *s1, int n, int m){
    tst s2;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++) {
            if(strcmp(s1[i].name, s1[i + 1].name) > 0){
                s2 = s1[i];
                s1[i] = s1[i+1];
                s1[i+1] = s2;
            }
        }
    }
}










