#include <stdio.h>
#define TAX 1.05

int main(void){
  float amount = 0.00f;
  printf("Enter a dollar and cents amount: \n");
  scanf("%f", &amount );
  printf("With tax added: $%.2f\n", amount*TAX);
  return 0;
}
