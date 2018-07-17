/* Modify the stack example from 10.2 so that it takes charracters instead of
integers, and add a main function that asks the user to enter a series of
parenthesis and/r braces, then indicates whether or not they're properly nested

TO-DO: ALL OF IT :)
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

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

void push(char i){
  if(is_full()){
    stack_overflow();
  }
  else{
    top++;
    contents[top] = i;
  }
}

int pop(void){
  if(is_empty()){
    stack_underflow();
  }
  else{
    char temp = contents[top];
    top--;
    return temp;
  }
}

/* Takes in two brace and/or parentheses symbols and checks if they correspond
*/
bool matchingSymbol(char x, char y){
  if(x == '(' && y == ')'){
    return true;
  }
  else if( x == '{' && y == '}'){
    return true;
  }
  else if( x == '[' && y == ']'){
    return true;
  }
  return false;
}

void user_entry(void){
  char ch;
  printf("Enter parentheses and/or braces: ");
  do{
    ch = getchar();
    if(ch == '(' || ch == '{' || ch == '['){
      push(ch);
    }
    else if(ch == ')' || ch == '}' || ch ==')'){
      if(!matchingSymbol(pop(), ch)){
        printf("They are not nested correctly");
        exit(EXIT_SUCCESS);
      }
    }
  }while(ch != '\n');

  if(is_empty){
    printf("Parentheses are nested properly");
  }
  else{
    printf("Parentheses/braces are not nested properly");
  }
}

int main(void){
  user_entry();
  return 0;
}
