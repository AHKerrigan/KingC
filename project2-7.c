/* Write a progrma that takes a US dollar amount in and displays
the smallest number of bills that can be used to make it*/

#include <stdio.h>

int main(void) {
  int amount;
  printf("Enter a US dollar amount: ");
  scanf("%d", &amount);
  printf("$20 Bills: %d\n", amount/20);
  printf("$10 Bills: %d\n", (amount%20)/10);
  printf("$5 Bills: %d\n", (amount%10)/5);
  printf("$1 Bills: %d\n", (amount%5));



  return 0;
}
