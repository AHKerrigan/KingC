/* Write a program that asks the user to enter a two digit number, then prints
that number's digits in reverse

CHAPTER 6: Generalize this program so that it can take as many digits as the user
wants */

#include <stdio.h>

int main(void) {
  int num;
  printf("Please enter a number \n");
  scanf("%d", &num);
  printf("The reversal is:  );

  // Prints the number mod 10, then divides it by 10 until its zero
  do{
    printf("%d", num % 10);
    num /=10;
  }while(num != 0);



  return 0;
}
