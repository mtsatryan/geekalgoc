// bubble sort

#include <stdio.h>

#define MaxN 100

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void print(int N, int *a){
    int i;
    for (i = 0; i  < N ; i++) {
        printf("%6i", a[i]);
    }
    printf("\n");
}

int main(int argc, char **argv) {
    int a[MaxN];
    int N;
    FILE *in;
    in = fopen("Insert your path here", "r");
    fscanf(in, "%i", &N);

    int i;

    for (i = 0; i < N; i++) {
        fscanf(in, "%i", &a[i]);
    }
    fclose(in);
    puts("Array before sort");
    printf(N,a);

    int j = 0;
    for (i = 0; i < N; i++)
        for(j = 0; j < N - 1; j++)
            if(a[j] > a[j + 1]){
                swap(&a[j], &a[j + 1]);
            }
    puts("Array after sort");
    print(N,a);


    return 0;
}
