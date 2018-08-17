/* Implement a integer stack using a linked list 
 *
 * MOD 17-11: Write the following functions
 * struct node count_occurrences(struct node *list, int n)
 */

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

// Traverses the stack list counting the number of times n occurs
int count_occurrences(node *stack, int n){
    int total = 0;
    for(node *p = stack; p != NULL; p = p->next){
        if(p->value == n){
            total++;
        }
    }
    return total;
}

int main(void){
    push(5);
    push(5);
    push(5);
    push(7);
    printf("Number of 5s: %d\n", count_occurrences(stack, 5));
    return 0;
}