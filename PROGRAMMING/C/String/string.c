#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>



int mylen(char *);
char* mycpy(char *, char *);
int mycmp(char *, char *);
char* mycat(char *, char *, int);
int palind(char *);
int identi(char *);
int numb(char *);
int retNumb(char *, int *);
void spaces(char *);
void callfunc();
void intro();
void choose(int, char *);

void main(){
    //intro();
    char s[100], s2[100], s3[100];
    int n = 0;
    gets(s);
    gets(s2);
    gets(s3);
    printf("\nMyLen %d", mylen(s));
    printf("\nMyCmp %d", mycmp(s,s2));
    printf("\nPalind %d", palind(s));
    printf("\nIdenti %d", identi(s));
    printf("\nNumb %d", numb(s));
    printf("\nMyCat %s", mycat(s,s2,0));
    printf("\nMyCpy %s", mycpy(s,s2));
    if(retNumb(s3,&n)) printf("\nRetNumb %d",n) ;
    else printf("\nRetNumb NO\n");
    //spaces(s3);
}

void intro(){
    system("cls");
    printf("\t\t\tHello");
    printf("\n\tWellcome to STR menu");
    printf("\nHere are the programs you can use:");
    printf("\n  1.String Lenght;\n  2.Compare Two Strings;\n  3.Is a String Symetric;\n  4.Is a String Identificator;\n  5.;\n  6.;\n  7.;\n  8.;\n  9.;\n  10.;");
    printf("\nThat's All For Now\nYou may choose now.");
    //char s() = {};
}

void choose(int max, char *programs){
    char c;
    do{
            int op = 0, i = 0;
        c=getch();
            if(c == 0 || c == 224){
                c = getch();
                if (c == 80){
                    if (op < max) op++;
                    else op = 1;
                }else if (c == 72){
                    if (op > 1) op--;
                    else op = max;
                }
            }
            for (int i = 1; i <= max;i++) {
                if (op == i) printf("\n > %d.%s",i,programs[i]);
                else printf("\n   %d.%s",i,programs[i]);
            }/*
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
            if (op == 6) printf("\n > 6.Exit");
            else printf("\n   6.Exit");*/
    }while(c!=13);
}

void callfunc(){
    char s[100], s2[100], s3[100];
    int n = 0;
    gets(s);
    gets(s2);
    gets(s3);
    printf("\nMyLen %d", mylen(s));
    printf("\nMyCmp %d", mycmp(s,s2));
    printf("\nPalind %d", palind(s));
    printf("\nIdenti %d", identi(s));
    printf("\nNumb %d", numb(s));
    printf("\nMyCat %s", mycat(s,s2,0));
    printf("\nMyCpy %s", mycpy(s,s2));
    if(retNumb(s3,&n)) printf("\nRetNumb %d",n) ;
    else printf("\nRetNumb NO");
    spaces(s3);
}

int mylen(char *s){ //strlen
    int i = 0;
    while(s[i] != 0) i++;
    return i;
}

int mycmp(char *s, char *s2){ //strcmp
    int i = 0;
    while( s[i] != 0 && s2[i] != 0){
        if (s[i] > s2[i]) return 1;
        else if (s[i] < s2[i]) return -1;
        i++;
    }
    if ( s[i] > s2[i]) return 1;
    else if (s[i] < s2[i]) return -1;
    return 0;
}

char* mycat(char *s, char *s2, int a){ //strcat
    int c = mylen(s);
    for (int i = a; s2[i] != '\0' ;i++,c++) s[c] = s2[i];
    s[c] = 0;
    return s;
}

char* mycpy(char *s, char *s2){ //strcpy
    for (int i = 0; i <= mylen(s2); i++) s[i] = s2[i];
    return s;
}

int palind(char *s){ //ifSymetric
    int n = mylen(s);
    int a = n / 2;
    for (int i = 0; i < a; i++){
        if (s[i] != s[n - i - 1]) return 0;
    }
    return 1;
}

int identi(char *s){ //ifIdentificator
    if (('a' <= s[0] && s[0] <= 'z') || ('A' <= s[0] && s[0] <= 'Z') || s[0] == '_'){
        for (int i = 1; i < strlen(s); i++)
            if (!('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z' ) || ( '0' <= s[i] && s[i] <= '9') || s[i] == '_') return 0;
        return 1;
    }
    else return 0;
}

int numb(char *s){ //ifNumber
    int n = strlen(s),a=0;
    if(s[0] == '+' || s[0] == '-'){
        a = 1;
        for(int i = 1; i <= n; i++){
            if(( '0' <= s[i] && s[i] <= '9' )) a++;
        }
    }else if('0' <= s[0] && s[0] <= '9'){
        for(int i = 0; i <= n; i++){
            if(( '0' <= s[i] && s[i] <= '9' )) a++;
        }
    }else return 0;
    if(a == strlen(s)) return 1;
    else return 0;
}

int retNumb(char *s, int *n){ //atoi
    *n = 0;
    if(numb(s)){
        if(s[0] == '-' || s[0] == '+'){
            for (int i = 1; i < mylen(s); i++){
                *n = ((*n) + (s[i] - '0')) * 10;
            }
        }else{
            for (int i = 0; i < mylen(s); i++){
                *n = ((*n) + (s[i] - '0')) * 10;
            }
        }
        if(s[0] == '-') *n = -(*n);
        *n = *n/10;
        return 1;
    }else return 0;
}

void spaces(char *s1){
    char s2 = s1;
    int indx = 0;
    if(s1[0] == ' '){
        for (int i = 0; i < mylen(s1); i++){
            if(s1[i] == ' ') indx++;

        }
        mycat(s1,s2,indx);
    }
    if (s1[0] == ' ') mycat(s1,s2,1);
    for (int i = 0; i < mylen(s1); i++){
        continue;
    }
    puts(s1);
}
