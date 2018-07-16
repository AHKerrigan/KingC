/* Modify the stack example from 10.2 so that it takes charracters instead of
integers, and add a main function that asks the user to enter a series of
parenthesis and/r braces, then indicates whether or not they're properly nested

TO-DO: ALL OF IT :)
*/

#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void stack_overflow(void){
  printf("Error: Stack Overflow");
  exit(EXIT_FAILURE);
}

void stack_underflow(void){
  printf("Error: Stack Underflow");
  exit(EXIT_FAILURE);
}

void make_empty(void){
  top = 0;
}

bool is_empty(void){
  return top == 0;
}

bool is_full(void){
  return top == STACK_SIZE;
}

void push(int i){
  if(is_full()){
    stack_overflow();
  }
  else{
    contents[++top] = i;
  }
}

int pop(void){
  if(is_empty()){
    stack_underflow();
  }
  else{
    return contents[--top];
  }
}

void user_entryu(void){

}


int main(void){
  printf("Enter parentheses and/or braces: ");

  return 0;
}
