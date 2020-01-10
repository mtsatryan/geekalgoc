#include <stdio.h>

struct age{

};

int main() {
    int i;

    printf("Введите число от 1 до 150 \n");
    scanf("%d", &i);

    if(i > 10 && i < 15)
        printf("Ваш возраст %i лет", i);
    else {
        switch(i%10) {
            case 1:
                printf("Ваш возраст %i год", i);
                break;
            case 2:
                printf("Ваш возраст %i года", i);
                break;
            case 3:
                printf("Ваш возраст %i года", i);
                break;
            case 4:
                printf("Ваш возраст %i года", i);
                break;
            default:
                printf("Ваш возраст %i лет", i);
                break;
        }
    }
    return 0;
}