/*
 * find the triangle perimeter
 */
#include <stdio.h>
#include <math.h>

double dist(double x1, double y1, double x2, double y2){
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main(int argc, char **argv) {
    double x1;
    double x2;
    double y1;
    double y2;
    double x3;
    double y3;
    double len1;
    double len2;
    double len3;

    printf("Input X1:\n");
    scanf("%lf", &x1);
    printf("Input Y1:\n");
    scanf("%lf", &y1);
    printf("Input X2:\n");
    scanf("%lf", &x2);
    printf("Input Y2:\n");
    scanf("%lf", &y2);
    printf("Input X3:\n");
    scanf("%lf", &x3);
    printf("Input Y3:\n");
    scanf("%lf", &y3);

    len1 = dist(x1,y1,x2,y2);
    len2 = dist(x1,y1,x3,y3);
    len3 = dist(x2,y2,x3,y3);

    printf("Perimeter: %lf", len1 + len2 + len3);

    return 0;
}