//Binary search algorithm

#include <stdio.h>
#include <mm_malloc.h>

int main() {

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
    printf("Enter value for search:");
    scanf("%d", &value);

    int L = 0;
    int R = N - 1;

    int m = L + (R - L) / 2;

    while(L <= R && a[m] != value)
    {
        if(a[m] < value)
            L = m + 1;
        else
            R = m + 1;
        m = L + (R - L) / 2;
    }
    if (a[m] == value)
        printf("Index: %d \nValue: %d",m,a[m]);
    else
        printf("Value Not Found");

    return 0;
}