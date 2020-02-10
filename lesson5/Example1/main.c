#include <stdio.h>
#include <mm_malloc.h>
#define T char

struct TNode{
    T value;
    struct TNode *next;
};

typedef struct TNode Node;

struct Stack{
    Node *head;
    int size;
    int maxSize;
};

struct Stack Stack;

void Push(T value){
    if(Stack.size >= Stack.maxSize){
        printf("Error stack size");
        return;
    }
    Node *tmp = (Node*) malloc(sizeof(Node));
    tmp -> value = value;
    tmp -> next = Stack.head;
    Stack.head = tmp;
    Stack.size++;
}

T Pop(){
    if(Stack.size == 0){
        printf("Stack is empty");
        return 0;
    }
    // temp pointer
    Node* next = NULL;
    // top of the stack value
    T value;
    value = Stack.head->value;
    next = Stack.head;
    Stack.head = Stack.head->next;
    // delete the pointing value, free the memory.
    free(next);
    // return the real top value.
    Stack.size--;

    return value;

}

void PrintStack(){
    Node *curr = Stack.head;
    while(curr){
        printf("%c", curr-> value);
        curr = curr -> next;
    }
}

int main() {

    Stack.maxSize = 100;
    Stack.head = NULL;

    Push('g');
    Push('f');
    Push('e');
    Push('d');
    Push('c');
    Push('b');
    Push('a');

    PrintStack();
    return 0;
}