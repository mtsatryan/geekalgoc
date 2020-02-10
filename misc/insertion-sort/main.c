#include <stdio.h>

#define MaxN 1000


int main() {

    int i = 0;
    int j, n, temp;
    int A[MaxN];

    printf("Include your number of elements");
    scanf("%d",&n);
    printf("\nEnter the elements\n");

    for(i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
    }

    for(i = 1; i <= n - 1; ++i) {
        temp= A[i];
        j = j - 1;

        while((temp <= A[j]) && (j >= 0)){
            A[j + 1] = A[j];
            j = j - 1;
        }

        A[j + 1] = temp;
    }

    printf("\nSorted list below:\n");
    for(i = 0; i < n; ++i){
        printf("%d\n",A[i]);
    }

    return 0;
}