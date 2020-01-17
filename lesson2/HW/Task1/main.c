// recurcive translation into binary numsys

#include <stdio.h>


int dig(int n){

    if (n != 0)
        dig(n/2);
    else return 0;

    printf("%d", n % 2);
    return 0;
}

int main(int argc, char **argv) {
    int n;
    printf("Insert your num: ");
    scanf("%d", &n);
    dig(n);

    return 0;
}