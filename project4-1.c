/* Write a program that asks the user to enter a two digit number, then prints
that number's digits in reverswe */

#include <stdio.h>

int main(void) {
  int originalNumber;
  printf("Please enter a two digit number \n");
  scanf("%d", &originalNumber);

  //Simply prints the number mod 10, with its tenth place in reverse order
  printf("The reversal is: %d%d\n", originalNumber % 10, originalNumber / 10);

  return 0;
}
