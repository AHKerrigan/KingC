/* Write a program that calculates the remaining balance on a loan after the
first, second, and third payments

6-9: Modify this program so that it als oasks for the number of payments*/

#include <stdio.h>

int main(void) {
  float principle, interest, monthlyPay, remaining;
  int payments;

  printf("Enter the loan principle\n");
  scanf("%f", &principle);
  printf("Enter the interest rate\n");
  scanf("%f", &interest);
  printf("Enter the monthly payment\n");
  scanf("%f", &monthlyPay);
  printf("Enter the number payments\n");
  scanf("%d", &payments);

  float monthlyInterest = (interest / 100 / 12) + 1;
  printf("%f\n", monthlyInterest );

  for(int i = 1; i < payments; i++){
    remaining = principle * monthlyInterest - monthlyPay;
    printf("Remaining after payment %d: %0.2f\n",i, remaining);
  }


  return 0;
}
