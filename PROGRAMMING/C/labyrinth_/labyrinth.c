#include <stdio.h>
#include <stdlib.h>
#define max 100

void mazeIn(int*, int, int);
void mazeOut(int*, int, int);
char mazeSolve(int *, int, int, int, int);
int wayFinder(int *, int, int)

int main(){
    int n, m, maze[max][max];
    scanf("%d", &n);
    scanf("%d", &m);
    mazeIn(maze,n,m);
    mazeSolve(maze,n,m);

    return 0;
}

void mazeIn(int *maze, int n, int m){
    for (int i = 0; i < n * m; i++) {
        scanf("%d", maze + i);
    }
}

void mazeOut(int *maze, int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", *(maze + n * i + j));
        }
        printf("\n");
    }
}

char mazeSolve(int *maze,int n, int m,int currX, int currY){

}