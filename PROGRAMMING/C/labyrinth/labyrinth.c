#include <stdio.h>
#include <stdlib.h>
#define max 100

void mazeIn(int*, int, int);
void mazeOut(int*, int, int);
void mazeSolve(int *, int, int);
int main(){
    int n, m, maze[max][max];
    scanf("%d", &n);
    scanf("%d", &m);
    mazeIn(maze,n,m);


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
            printf("%d ", *(maze +n*i+j));
        }
        printf("\n");
    }
}

void mazeSolve(int *maze, int n, int m){
    int currX = 0, currY = 0; heading = 0, ahead, rotations, noWay = 0; //heading 0 - right, 1 - down, 2 - left, 3 - up
    do{
        rotations = 0;
        do{
            switch(heading){

                case 0: 
                    if (currY + 1 != m)
                        ahead = *(maze + (currY + 1) * n + currX);
                    else 
                        ahead = 1;
                break;
                case 1:
                    if (currX != 0)
                        ahead = *(maze + currY * n + (currX - 1));
                    else 
                        ahead = 1;
                break;
                case 2:
                    if (currY != 0)
                        ahead = *(maze + (currY - 1) * n + currX);
                    else 
                        ahead = 1;
                break;
                case 3:
                    if (currX +1 != 0)
                        ahead = *(maze + currY * n + (currX + 1));
                break;
            }
            if (ahead) {
                heading = (heading + 1) % 4;
                rotations++;
            if (rotations == 4 ) {
                noWay = 1;
                break;
            }
        }while(ahead);    
    }while((currX != 0 && currX != 0) || (currX = 0 && currX = 0) );
    if (noWay) printf("\nNo Way");
    
}