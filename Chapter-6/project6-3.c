/* Write a program that asks the user to enter a fraction, then reduces that
fraction to the lowest terms 8 */

#include <stdio.h>

int main(void){
  int numer, denom;
  printf("Enter your fraction ");
  scanf("%d/%d", &numer, &denom);
  int m = denom;
  int n = numer;
  int temp;
  // Euler's algorithm
  if(n > m){
    temp = n;
    n = m;
    m = temp;
  }
  while(n != 0){
    temp = n;
    n = m % n;
    m = temp;
  }

  printf("Lowest Terms: %d/%d", numer / m, denom / m);

  return 0;
}
