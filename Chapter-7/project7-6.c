/* Write a program that prints the values of sizeof(int), sizeof(short),
sizeof(long), sizeof(float), sizeof(double), and sizeof(long double) */

#include <stdio.h>

int main(void){
  printf("The size of int is %u\n", sizeof(int));
  printf("The size of short is %u\n", sizeof(short));
  printf("The size of long is %u\n", sizeof(long));
  printf("The size of float is %u\n", sizeof(float));
  printf("The size of double is %u\n", sizeof(double));
  printf("The size of long double is %u\n", sizeof(long double));

  return 0;
}
