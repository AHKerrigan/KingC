/* Write a program that approximates e using the facotrial identity*/

#include <stdio.h>

int main(void){
  // We set e to one to assume the base case
  int n;
  float e = 1, factorial = 1;
  printf("Enter n: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    factorial *= i;
    e += (1 / factorial);
  }
  printf("%f",e);
  return 0;
}
