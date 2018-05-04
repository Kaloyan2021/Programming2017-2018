#include <stdio.h>
#include <string.h>


int mylen(char *);
char* mycpy(char *, char *);
int mycmp(char *, char *);
char* mycat(char *, char *);
int palind(char *);
int identi(char *);
int numb(char *);
int retNumb(char *, int *);

void main(){
    char s[100], s2[100], n = 0;
    gets(s);
    gets(s2);
    printf("\nMyLen %d", mylen(s));
    printf("\nMyCmp %d", mycmp(s,s2));
    printf("\nPalind %d", palind(s));
    printf("\nIdenti %d", identi(s));
    printf("\nNumb %d", numb(s));
    printf("\nMyCat %s", mycat(s,s2));
    printf("\nMyCpy %s", mycpy(s,s2));
    printf("\nRetNumb %d %d", retNumb(s,&n), n);
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

char* mycat(char *s, char *s2){ //strcat
    int c = mylen(s);
    for (int i = 0; s2[i] != '\0' ;i++,c++) s[c] = s2[i];
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
    if (('a' <= s[0] && s[0] <= 'z') || ('A' <= s[0] && s[0] <= 'Z') || s[0] == '_')
        for (int i = 1; i < strlen(s); i++)
            if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z' ) || ( '0' <= s[i] && s[i] <= '9') || s[i] == '_') return 1;
        else return 0;
    else return 0;
}

int numb(char *s){ //ifNumber
    int n = strlen(s);
    if(s[0] == '+' || s[0] == '-'){
        for(int i = 1; i <= n; i++){
            if(( '0' <= s[i] && s[i] <= '9' )) return 1;
        }
    }else if('0' <= s[0] && s[0] <= '9'){
        for(int i = 1; i <= n; i++){
            if(( '0' <= s[i] && s[i] <= '9' )) return 1;
        }
    }else return 0;
}

int retNumb(char *s, int *n){ //atoi
    *n = 0;
    if(numb(s)){
        for (int i = 0; i < mylen(s); i++){
            *n = *n * 10 + (s[i] - '0');
        }
        if(s[0] == '-') *n = -*n;
        return 1;
    }
    return 0;
}
