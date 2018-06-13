/* Write a program that calculates how many digits a number contains
Assume no more than four digits*/

#include <stdio.h>

int main(void) {
  int num, digits;
  printf("Enter the number you want to test: \n");
  scanf("%d", &num);

  if(num > 0 && num < 10) {
    digits = 1;
  }
  else if(num >= 10 && num <=99 ) {
    digits = 2;
  }
  else if(num >= 100 && num <= 999) {
    digits = 3;
  }
  else {
    digits = 4;
  }

  printf("The number has %d digits ", digits);
  return 0;
}
