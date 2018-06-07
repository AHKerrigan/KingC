/* Write a progrma that prompts the user to enter a telephone number in the form
(xxx) xxx-xxxx and then displays the numer in the form xxx.xxx.xxxx*/

#include <stdio.h>

int main(void) {
  int areaCode, num1, num2;
  printf("Enter phone number [(xxx) xxx-xxxx]: \n");
  scanf("(%d) %d-%d", &areaCode, &num1, &num2);
  printf("You entered %d.%d.%d", areaCode, num1, num2);
  return 0;
}
