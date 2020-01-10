#include <stdio.h>

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(int argc, char **argv) {
    int a;
    int b;
    printf("Insert your two numbers!\n");
    scanf("%d%d", &a, &b);
    swap(&a,&b);
    printf("Your numbers are now: %d, %d", a,b);

    return 0;
}