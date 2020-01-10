/*
 * Поиск НОД по ускоренному алгоритму Эвклида
 */

#include <stdio.h>

#define T long

T gcd(T a, T b) {
    T c;

    while (b) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main (int argc, char **argv) {

    int a;
    int b;
    printf("%s","Input a:\n");
    scanf("%d", &a);
    printf("%s","Input b:\n");
    scanf("%d", &b);



    printf("GCD: %i", gcd(a,b));

    return a;
}