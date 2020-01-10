#include <stdio.h>

int main(int argc, char **argv) {

    double m;
    double h;
    double I;

    printf("Insert your Weight:\n");
    scanf("%lf",&m);
    printf("Insert your Height in meters (use '.' as delimiter :\n");
    scanf("%lf",&h);

    I = (m/(h*h));

    printf("Your Body Mass Index is: %lf", I);

    return 0;
}