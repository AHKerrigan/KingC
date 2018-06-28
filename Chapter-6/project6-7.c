/* Prints a table of square using an off method

Project 6-7 change: Rearrange the square3.c program so that the for loop
initializes i, tests i, and increments i. Don't rewrite the program, don't user
any multiplication*/

#include <stdio.h>

int main(void){

  int i, n, odd, square;

  printf("This program prints a table of squares\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  square = 1
  odd = 3;

  for(int i = 1; i <= n; i++){
    printf("%10d%10d\n", i, square);
    odd += odd;
    square += odd
  }
  return 0;
}
