#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <mm_malloc.h>

int main(int argc, char **argv) {

    int* a;
    int N;

    printf("Input N:");
    scanf("%i", &N);

    a = (int*) malloc((N * sizeof(int)));

    int i;

    for (i = 0; i < N; i++) {
        printf("Input %d:", i);
        scanf("%d", &a[i]);
    }

    int value;

    printf("Insert your Value for search:\n");
    scanf("%d", &value);

    a[N] = value;
    i = 0;

    while(a[i] != value) i++;
    if(i != N){
        printf("Index: %d \nValue: %d", i, a[i]); // Search Algorythm
    } else {
        printf("Value Not Found");
    }

    return 0;
}