/* Write a program that asks the user to enter a fraction, then reduces that
fraction to the lowest terms 8

MOD: 11-2: include the following function

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator); */

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
    int m = denominator;
    int n = numerator;
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

  *reduced_numerator = numerator / m;
  *reduced_denominator = denominator / m;
}

int main(void){
  int numer, denom, reduced_numer, reduced_denom;
  printf("Enter your fraction ");
  scanf("%d/%d", &numer, &denom);
  reduce(numer, denom, &reduced_numer, &reduced_denom);
  
  

  printf("Lowest Terms: %d/%d", reduced_numer, reduced_denom);

  return 0;
}