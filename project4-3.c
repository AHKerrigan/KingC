/* Rewrite the previous program to work without using arithmatic */

#include <stdio.h>

int main(void) {
  int num1, num2, num3;
  printf("Please enter a three digit number \n");
  scanf("%1d%1d%1d", &num1, &num2, &num3);

  //Simply prints the number mod 10, with its tenth place in reverse order
  printf("The reversal is: %d%d%d\n", num3, num2, num1);
  return 0;
}
