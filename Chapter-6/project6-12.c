/* Write a program that approximates e using the facotrial identity

MODIFY: 6-12 - Rewrite the program so the user can enter an epislon, and the
program runs until the current c is less than that*/

#include <stdio.h>

int main(void){
  // We set e to one to assume the base case
  float e = 1, factorial = 1, epsilon;
  printf("Enter epsilon: ");
  scanf("%f", &epsilon);

  for(int i = 1; (1 / factorial) > epsilon; i++){
    factorial *= i;
    e += (1 / factorial);
  }
  printf("%f",e);
  return 0;
}
