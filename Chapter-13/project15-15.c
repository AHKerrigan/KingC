/* Implement a calculator that utilizes reverse polish notaiton using a stack 
 * MOD 15-15: include the following function
 * int evalulate_RPN_expression(const char *expression)
 */

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

int read_line(char str[], int n){
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if(i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

int evalulate_RPN_expression(const char *expression){
    for(char *ch = expression; *ch != '='; ch++){
        if(ch >= 48 && ch <= 57){
            push(ch);
        }
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
    return pop() - 48;

}

int main(void){
  char ch;
  char expression[100];
  int value;
  printf("Enter a RNP expressoin: ");
  read_line(expression, 100);
  value = evalulate_RPN_expression(expression);
  


  return 0;
}
