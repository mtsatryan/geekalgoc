// bubble sort

#include <stdio.h>

#define MaxN 100

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(int argc, char **argv) {
    int array[100];
    int count = 0;
    int c, d, n;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter your integers: ");

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    for (c = 0;  c < n - 1; c++){
        for (d = 0; d < n - c - 1; d++)
        {
            if(array[d] > array[d - 1]) //For decreasing order use "<"
            {
                count++;
                swap(&array[d],&array[d + 1]);
            }
        }
    }
    printf("Sorted array in ascending order:\n");

    for(c = 0; c < n; c++)
        printf("%d\n", array[c]);

    printf("Count:%d", count);
    return 0;
}