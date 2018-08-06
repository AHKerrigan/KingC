/* Rewrite the stack data stucture using a pointer for the top 
    element */

#include <stdbool.h> 
#include <stdio.h>
#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int *top = &contents[0];

void stack_overflow(){
    printf("Stack overflow");
}

void stack_underflow(){
    printf("Stack underflow");
}

void make_empty(void){
    top = &contents[0];
}

bool is_empty(void){
    return top == &contents[0];
}

bool is_full(void){
    return top == &contents[STACK_SIZE - 1];
}

void push(int i){
    if(is_full()){
        stack_overflow();
    }
    else{
        *top = i;
        top++;
    }
}

int pop(void){
    if(is_empty()){
        stack_overflow();
    }
    else{
        top--;
        return *top;
    }
}

int main(void){
    make_empty();

    push(1);
    push(2);
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    
    return 0;
}