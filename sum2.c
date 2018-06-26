/* example progrma that sums a series of numbers (using long variables)

*/

#include <stdio.h>

int main(void){
  long int n, sum = 0;
  printf("This program sums a series of numbers. \n");
  printf("Enter numbers (0 to terminate): ");

  scanf("%ld", &n);
  while(n != 0){
    sum += n;
    scanf("%ld", &n);
  }
  printf("The sum is: %ld\n", sum);

  return 0;
}
