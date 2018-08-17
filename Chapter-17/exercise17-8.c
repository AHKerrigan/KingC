/* Implement a integer stack using a linked list */

#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

struct node {
    int value;
    node *next;
};

node *stack = NULL;  // Bottom of the stack

// Pushes n onto the stack 
void push(int n){
    node *newNode = malloc(sizeof(node));
    if(newNode == NULL){
        printf("Stack Overflow\n");
        return;
    }
    newNode->value = n;
    newNode->next = stack;
    stack = newNode;
}

// Pops the stack by returning the top value then freeing it
int pop(){
    if(stack == NULL){
        printf("Stack Underflow\n");
        return 0;
    }
    int n = stack->value;
    node *next = stack->next;
    free(stack);
    stack = next;
    return n;
} 

int main(void){
    push(5);
    printf("%d", pop());
    pop();
}