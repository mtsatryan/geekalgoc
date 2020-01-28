#include <stdio.h>

int max(int a, int b)
{
    return (a > b)? a : b;
}

int lcs(char *A, char *B){
    if(*A == "\0" || *B=='\0') return 0;
    else if(*A == *B) return 1 + lcs(A + 1, B + 1);
    else
        return max(lcs(A + 1, B),lcs(A, B + 1));
}

int main() {

    char X[] = "abc";
    char Y[] = "abcdefg";

    int m = strlen(X);
    int n = strlen(Y);

    printf("Length of LCS is %d", lcs( X, Y ) );

    return 0;

    return 0;
}