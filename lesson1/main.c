/*
 * Написать программу, которая подсчитывает расстояние между точками с координатами x1, y1 и x2, y2
 * по формуле sqrt(pow(x1 − x2, 2) + pow(y1 − y2, 2)).
 *
 */

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
    double x1;
    double x2;
    double y1;
    double y2;
    double dist;

    printf("Input X1:\n");
    scanf("%lf", &x1);
    printf("Input Y1:\n");
    scanf("%lf", &y1);
    printf("Input X2:\n");
    scanf("%lf", &x2);
    printf("Input Y2:\n");
    scanf("%lf", &y2);

    dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    printf("Distance: %lf", dist);

    return 0;
}