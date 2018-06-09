/* Write a program that takes an integer from the user and prints it in octal*/

#include <stdio.h>

int main(void) {
  //The number to be converted
  int num;
  // The running quotient we will use throughout the process
  int remaining;
  int oct1, oct2, oct3, oct4, oct5;
  printf("Input an integer to be converted to octal: \n");
  scanf("%d", &num);
  oct5 = num % 8;
  remaining = num / 8;
  oct4 = remaining % 8;
  remaining /= 8;
  oct3 = remaining % 8;
  remaining /= 8;
  oct2 = remaining % 8;
  remaining /= 8;
  oct1 = remaining % 8;

  printf("The result is: %d%d%d%d%d\n", oct1, oct2, oct3, oct4, oct5);


  return 0;
}
