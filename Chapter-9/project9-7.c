/* Write a program that utilizes a function to print the polynomial listed in
the book

MOD - 9-7: Modify the previous project to utilize a more efficient exponential
function */

#include <stdio.h>

int expo(int x, int n){
  if(n == 0){
    return 1;
  }
  else if(n % 2 == 0){
    return expo(x, n/2) * expo(x, n/2);
  }
  else{
    return x * expo(x, n-1);
  }
}

int poly(int x){
  int total = 0;
  total += 3 * expo(x, 5);
  total += 2 * expo(x, 4);
  total -= 5 * expo(x, 3);
  total -= expo(x, 2);
  total += 7 * x;
  total -= 6;
  return total;
}

int main(void){
  int x;
  printf("Enter x: ");
  scanf("%d", &x);
  printf("The answer is %d", poly(x));
  return 0;
}
