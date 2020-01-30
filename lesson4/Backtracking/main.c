#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <curses.h>
#define N 8
#define M 8

int board[N][M];

int SearchSolution(int n);
int CheckBoard();
int CheckQueen(int x, int y);
void Print(int n, int m, int a[N][M]);
void Zero(int n, int m, int a[N][M]);
void Pause(int key);

int main(int argc, char **argv) {

    Zero(N,M,board);
    SearchSolution(1);
    printf("\n\n");
    Print(N,M,board);
    //getch();
    return 0;
}

int SearchSolution(int n){
    if(CheckBoard() == 0) return 0;
    if(n == 9) return 1;

    int row;
    int col;

    for (row = 0; row < N ; row++) {
        for (col = 0; col < M; col++) {
            if(board[row][col] == 0) {
                board[row][col] = n;
                if(SearchSolution(n + 1)) return 1;
                board[row][col] = 0;
            }
        }
    }
    return 0;
}


int CheckBoard(){
    int i, j;
    for( i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(board[i][j] != 0)
                if(CheckQueen(i,j) == 0)
                    return 0;

        }
    }
    return 1;
}

int CheckQueen(int x, int y){
    int i, j;
    for( i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(board[i][j] != 0)
                if(!(i == x && j == y))
                {
                    if(i - x == 0 || j - y == 0)
                        return 0;
                    if(abs(i - x) == abs(j - y))
                        return 0;
                }
        }
    }
    return 1;
}

void Print(int n, int m, int a[N][M]){

    int i,j;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
}

void Zero(int n, int m, int a[N][M]){
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < 0; j++)
            a[i][j] = 0;
}