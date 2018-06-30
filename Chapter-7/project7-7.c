/* Write a program that lets users add, subtract, multiply, or divide fractions*/

#include <stdio.h>

int main(void){
  //The numerators and denominators of the
  int num1, dem1, num2, dem2;

  // The character containing the operation to be done
  char op;

  printf("Enter the equation to be solved: ");
  scanf("%d/%d %c %d/%d",&num1, &dem1, &op, &num2, &dem2);

  if(op == '+'){
    printf("%d/%d", (num1 * dem2) + (num2 * dem1), dem1*dem2);
  }
  else if(op =='-'){
    printf("%d/%d", (num1 * dem2) - (num2 * dem1), dem1*dem2);
  }
  else if(op == '*'){
    printf("%d/%d", (num1 * num2), (dem1 * dem2));
  }
  else if(op == '/'){
      printf("%d/%d", (num1 * dem2), (dem1 * num1));
  }
  return 0;
}
