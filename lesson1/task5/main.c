#include <stdio.h>

int main() {
   int index = 0;

   do{
      menu();
      scanf("%i", &index);

       {

       }
   }
   return 0;
}

void menu(){
    
}

void chess(){
        int x1;
        int x2;
        int y1;
        int y2;

        printf("Введите числовые параметры двух полей шахматной доски: ");
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

        if ( (x1 + x2 + y1 + y2) %2 == 0)
        printf("Данные поля относятся к одному цвету");
        else
        printf("Данные поля не относятся к одному цвету");

        return 0;
}