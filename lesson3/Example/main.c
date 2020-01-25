// Linear search in massive

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <mm_malloc.h>


int main(int argc, char **argv) {

    int* a;

    int N;
    printf("Input N:");
    scanf("%i", &N);

    a = (int*) malloc(N * sizeof(int));

    int i;
    for (int i = 0; i < N ; ++i) {

        printf("Input %d:", i);
        scanf("%d", &a[i]);
    }

    int value;
    printf("Input value for search:");
    scanf("%d", &value);

    i = 0;

    while (i < N && a[i] != value) i++; // Searching algorythm.

    if( i != N)
        printf("Index: %d \n Value: %d ", i, a[i]);
    else
        printf("Value Not Found");

    return 0;
}