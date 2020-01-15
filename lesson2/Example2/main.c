/* Find sum of the nums in the num A;
 * None-recursive way.
 *
*/

#include <stdio.h>
/*
 * int sumDigit(long a){
    int s = 0;
    while(a > 0){
        s = s + a % 10;
        a /= 10;
    }
    return s;
}

int main(int argc, char** argv) {
    int n;
    printf("Input Number:");
    scanf("%d", &n);
    printf("Summ of digits: %d", sumDigit(n));

    return 0;
}
 *
 *
 */

int sumDigit(long a){
    if (a == 0)
        return 0;
    else
        return sumDigit(a/10) + a % 10;
}

int main(int argc, char** argv) {
    int n;
    printf("Input Number:");
    scanf("%d", &n);
    printf("Summ of digits: %d", sumDigit(n));

    return 0;
}