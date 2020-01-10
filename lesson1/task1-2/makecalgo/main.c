#include <unistd.h>
#include <stdio.h>
#include <math.h>


float main() {
    int a, b, c;
    a = 4;
    b = 4;
    c = 1;

    double x1, x2, D;

    D = (b * b) - 4 * a * c;

        if (D < 0){
            printf("Здесь корней нет.");
        } else if (D == 0)
        {
            x1 = (-b+sqrt(D))/(2*a);
            printf("Корень уравнения: ");
            printf("%f", x1);
        }else {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            printf("Первый корень уравнения: ");
            printf("%f", x1);
            printf("\n Второй корень уравнения: ");
            printf("%f", x2);
        }

        return 0;

}