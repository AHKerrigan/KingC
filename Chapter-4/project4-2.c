/* Extend the program from 4-1 to handle 3 digit numbers */

#include <stdio.h>

int main(void) {
  int originalNumber;
  printf("Please enter a three digit number \n");
  scanf("%d", &originalNumber);

  //Simply prints the number mod 10, with its tenth place in reverse order
  printf("The reversal is: %d%d%d\n", originalNumber % 10,
    (originalNumber % 100) / 10, originalNumber / 100);

  return 0;
}
