#include <stdio.h>
#define N 8
#define M 8

void Print2(int n, int m, int a[N][M]){
    int i, j;
    for (i = 0; i < n; i++) {
        for(j = 0; j < m; j++)
            printf(" %4d ",a[i][j]);
        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    int Map[N][M]; // строка 16. Определяем с помощью нее карту запретных клеток.
    int A[N][M];
    int i, j;

    for(j = 0; j < M; j++)
        A[0][j] = 1;
    for(i = 1; i < N; i++)
    {
        A[i][0] = 1;
        for(j = 1; j < M; j++){
            if(Map[i][j]){
                A[i][j] = A[i - 1][j] + A[i][j - 1];
            } else {
                A[i][j] = 0; // все недоступные ячейки обозначаются нулями.
            }

            // A[i][j] = A[i][j - 1] + A[i - 1][j]; // рекуррентное соотношение. Для работы сначала убрать строку 16.
        }


    }
    Print2(N,M,A);
    return 0;
}