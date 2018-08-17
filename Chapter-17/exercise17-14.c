/* Implement a integer stack using a linked list 
 *
 * MOD 17-11: Write the following functions
 * struct node count_occurrences(struct node *list, int n)
 * 
 * MOD 17-12 - Write the following function
 * struct node *find_last(struct node *list, int n)
 *
 * MOD 17-14 - write a delete function that delcares only one pointer
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

// Finds the last occurnace of a value on the stack
struct node *find_last(node *list, int n){
    node *last = NULL;
    for(node *p = stack; p != NULL; p = p->next){
        if(p->value == n){
            last = p;
        }
    }
    return last;
}

// Deletes the node highest up on the stack with value n
void delete_from_list(node **list, int n){
    node *p = *list;
    while(p){
        if(p->value == n){
            *list = p->next;
            free(p);
            break;
        }
        list = &p->next;
        p = p->next;
    }
}

int main(void){
    push(5);
    push(5);
    push(5);
    push(7);
    delete_from_list(&stack, 5);
    printf("Number of 5s: %d\n", count_occurrences(stack, 5));
    return 0;
}