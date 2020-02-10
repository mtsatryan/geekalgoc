// Вычисление выражения, записанного в постфиксной записи

#include <stdio.h>
#include <string.h>
#include <mm_malloc.h>
#include <ctype.h>
#include <stdlib.h>

#define T int
#define MaxN 1000

struct TNode{
    T value;            // Данные
    struct TNode *next; // Указатель на следующий элемент списка
};

typedef struct TNode Node;

Node* head = NULL;

void push(T value){
    Node *temp;
    temp = (Node*)malloc(sizeof(Node));
    temp -> value = value;
    temp -> next = head;
    head = temp;
}

T pop(){
    Node* temp = NULL;
    T value = head->value;
    temp = head;
    head = head->next;
    free(temp);
    return value;
}

void print(){
    Node* current;
    current = head;
    while (current != NULL){
        printf("%d", current->value);
        current = current->next;
    }
}

void printr(Node* current){
    if (current != NULL){
        printr(current->next);
        printf("%d",current->value);
    }
}

int isNumber(char *str){
    int i = 0;
    while (str[i]) {
        if (!isdigit(str[i++])) {
            return 0;
        }
    }
    return 1;
}




int main(int argc, char **argv) {

    int res = 0;
    int counter = 0;
    char buf[100] = "20 30 - 10 *"; // (20 - 30) * 10
    printf("Input postfix expression: ");


    for (int i = 0; i < strlen(buf); ++i) {
        char el[20];
        int j = 0;
        while (buf[i] != ' ' && buf[i] != "\0"){
            el[j] = buf[i];
            j++;
            i++;
        }
        el[j] != '\0';
        if(isNumber(el))
            push(atoi(el));
        else
        {
            switch (el[0]){
                case '+':
                    res = pop() + pop();
                    push(res);
                    break;
                case '-':
                    res = pop() - pop();
                    push(res);
                    break;
                case '*':
                    res = pop() * pop();
                    push(res);
                    break;
                case'/':
                    res = pop() / pop();
                    push(res);
                    break;
                default:
                    break;
            }
        }
    }

    printf("%d", pop());
    getchar();
    return 0;
}