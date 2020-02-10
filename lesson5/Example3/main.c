// стек на основе односвязного списка

#include <stdio.h>
#include <mm_malloc.h>

#define T char

// Описание структуры узла списка
struct TNode{
    T value; // Данные
    struct TNode *next; // Указатель на следующий элемент списка
};
typedef struct TNode Node;

// Опишем структуру Stack и глобальную переменную Stack.
struct Stack{
    Node *head;
    int size;
    int maxSize;
};
struct Stack Stack;

void push(T value){
    if(Stack.size >= Stack.maxSize){
        printf("Error stack size");
        return;
    }
    Node *tmp = (Node*) malloc(sizeof(Node));

    tmp->value = value;// записываем данные
    tmp->next = Stack.head; // записываем предыдущее значение главы
    Stack.head = tmp; // голова теперь указывает на вновь созданный элемент
    Stack.size++; // увеличиваем количество элементов в стеке
}

T pop() {
    if (Stack.size == 0){
        printf("Stack is empty");
        return 0;
    }
    Node* next = NULL; // временная переменная

    T value = Stack.head->value;
    next = Stack.head; // запоминаем значение головы во временной переменной
    Stack.head = Stack.head->next; // записываем в голову предыдущий элемент

    free(next); // освобождаем временную переменную

    // Возвращаем значение, которое было в голове? и уменьшаем количество элементов
    Stack.size--;
    return value;
}

// Распечатка односвязного списка

void PrintStack(struct Stack Stack){
    Node *curr = Stack.head;
    while(curr != NULL){
        printf("%c",curr->value);
        curr = curr->next;
    }
}

int main(int arc, char **argv) {

    Stack.maxSize = 100;
    Stack.head = NULL;
    push('L');
    push('E');
    push('A');
    push('H');
    push('C');
    push('I');
    push('M');
    PrintStack(Stack);

    return 0;
}