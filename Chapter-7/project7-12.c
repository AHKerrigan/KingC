/* Write a pogram that evaluates an expression

Note, book does not seem to require PEMDAS*/

#include <stdio.h>

int main(void){

  // Temporary values obtrained one by onef
  float  tempNum;

  // Running total of the entire expression
  float total = 0;
  char expression;

  printf("Enter an expression: ");
  // Starts by inputting the first entry as the total
  scanf("%f", &total);


  do{

    expression = getchar();
    // After the number is inputted, we get char again for an expression
    // Also checks to see if we've already terminated so it doesn't
    // search for a float input
    if(expression != '\n'){
      scanf("%f", &tempNum);
    }
    if(expression == '+'){
      total += tempNum;
    }
    else if(expression == '-'){
      total -= tempNum;
    }
    else if(expression == '*'){
      total *= tempNum;
    }
    else if(expression == '/'){
      total /= tempNum;
    }
  }while(expression != '\n');

  printf("Value of expression: %.3f", total);
  return 0;
}
