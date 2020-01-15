// Example of output the nums from a to b using recursive method

#include <stdio.h>

void loop(int a, int b){
    printf("%5d",a);
    if (a<b)
        loop(a+1,b);
}


int main(int argc, char **argv) {

    loop(0,10);

    return 0;
}