/* example progrma that sums a series of numbers (using long variables)

MODIFY 7-4: Modify the sum2.c program to sum a series of double values*/

#include <stdio.h>

int main(void){
  long double n, sum = 0;
  printf("This program sums a series of numbers. \n");
  printf("Enter numbers (0 to terminate): ");

  scanf("%Lf", &n);
  while(n != 0){
    sum += n;
    scanf("%Lf", &n);
  }
  printf("The sum is: %Lf\n", sum);

  return 0;
}
