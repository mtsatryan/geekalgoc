// Stack using array.

#include <stdio.h>

#define T char
#define MaxN 1000

T Stack[1000];

int N = -1;

void Push(T i){
    if(N < MaxN){
        N++;
        Stack[N] = i;
    }
    else
        printf("Stack overflow");
}

T Pop(){
    if (N != -1){
        return Stack[N--];
    }else
        printf("Stack is empty");
}
// Пример односвязного списка
/*
struct TNode
{
    int value;          // Данные
    struct TNode* Next; // указатель на следующий элемент списка
};
*/
// пример двусвязного списка
/*
struct TNode
{
    int value;
    struct TNode *next; // указатель на следующий элемент массива
    struct TNode *prev; // указатель на предыдущий элемент массива
};

struct TNode *head;
struct TNode *tail;
*/
//

// Создаем узел динамических данных для работы с динамическими структурами данных

struct TNode{
    int value; // создаем значение
    struct TNode *next; // Указатель на следующий элемент списка
};


int main() {
/*
    Push('a');
    Push('b');
    Push('c');
    Push('d');
    Push('e');
    Push('f');
    Push('g');
    Push('h');

    while(N != -1)
        printf("%c",Pop());
*/

    return 0;
}