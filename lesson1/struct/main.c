/*
 * solving the point distance problem using structures
 */

#include <stdio.h>
#include <math.h>

struct Point{
    double x;
    double y;
};

double dist(struct Point A, struct Point B){
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

int main(int argc, char **argv) {
    struct Point p1;
    struct Point p2;

    printf("Input X1\n");
    scanf("%lf", &p1.x);
    printf("Input Y1\n");
    scanf("%lf", &p1.x);
    printf("Input X2\n");
    scanf("%lf", &p1.x);
    printf("Input Y2\n");
    scanf("%lf", &p1.x);

    printf("Distance: %lf", dist(p1,p2));
    return 0;
}