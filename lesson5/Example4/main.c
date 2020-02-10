// Пример использования структуры Stack на основе массива с использованием структуры.

#include <stdio.h>
#define MaxN 1000
#define T char

struct TStack{
    int N;          // Номер входного элемента
    T Data[MaxN];   // Данные
};
struct TStack Stack1;
struct TStack Stack2;
struct TStack Stack3;

void push(struct TStack *Stack, T data){
    Stack->N++;
    (*Stack).Data[(*Stack).N] = data;

    //Stack->Data[Stack->N] = data;
}

T pop(struct TStack *Stack){
    if (Stack->N != -1)
        return Stack->Data[Stack->N--];
}

void init(struct TStack *Stack){
    Stack->N = -1;
}


int main(int argc, char **argv) {
    init(&Stack1);
    init(&Stack2);
    init(&Stack3);
    push(&Stack1,'a');
    push(&Stack1,'b');
    push(&Stack2,'c');
    push(&Stack3,'d');
    push(&Stack1,'e');
    push(&Stack1,'f');

    while (Stack1.N != -1)
        printf("%c",pop(&Stack1));
    return 0;
}