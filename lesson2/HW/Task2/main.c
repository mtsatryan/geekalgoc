// powering integer a on power of b

#include <stdio.h>

void iter_power(int a, int b){
    int	result;

    result = 1;
    if (b < 0)
        printf("Is Negative");
    if (b == 0)
        printf("Is OK");
    while (b)
    {
        result *= a;
        b--;
    }
    printf("%d", result);
}

int rec_power(int a, int b){

    if (b < 0)
        return(0);
    if (b == 0)
        return(1);
     return (a * (rec_power(a, b - 1)));

}

int main(int argc, char **argv) {
    int a;
    int b;
    printf("Print your number: ");
    scanf("%d", &a);

    printf("Print the power of it: ");
    scanf("%d", &b);

    iter_power(a, b);
    printf("\n");
    printf("%d", rec_power(a, b));
    return 0;
}