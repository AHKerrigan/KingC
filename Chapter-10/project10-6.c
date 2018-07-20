/* Implement a calculator that utilizes reverse polish notaiton using a stack */

#include <stdio.h>
#include <stdlib.h>
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
  printf("Error: Too nmany operators");
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

void push(char i){
  if(is_full()){
    stack_overflow();
  }
  else{
    top++;
    contents[top] = i;
  }
}

char pop(void){
  if(is_empty()){
    stack_underflow();
  }
  else{
    char temp = contents[top];
    top--;
    return temp;
  }
}

int main(void){
  char ch;
  while(true){
    printf("Enter a RNP expression: ");
      while(ch != '='){
        scanf(" %c", &ch);
          if(ch >= 48 && ch <= 57){
            push(ch);
          }
          // This is included because of input buffer
          if(ch == '\n');
          else{
            switch(ch){
              case '+': push((pop() - 48) + (pop() - 48) + 48); break;
              case '-': push((pop() - 48) - (pop() - 48) + 48); break;
              case '*': push((pop() - 48) * (pop() - 48) + 48); break;
              case '/': push((pop() - 48) / (pop() - 48) + 48); break;
            }
          }
      }
      printf("Value of expression: %d\n", pop() - 48);
      ch = ' ';
  }
  return 0;
}
