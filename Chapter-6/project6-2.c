/* Write a program that asks the user to enter two integers, then calculates
and displays their greatest common divisor*/

#include <stdio.h>

int main(void){
  int m, n, temp;
  printf("Enter two integers: ");
  scanf("%d %d", &m, &n);
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

  printf("The greatest common devisor is %d", m);
  return 0;
}
