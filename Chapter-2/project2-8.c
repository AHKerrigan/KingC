/* Write a program that calculates the remaining balance on a loan after the
first, second, and third payments */

#include <stdio.h>

int main(void) {
  float principle, interest, monthlyPay, remaining;

  printf("Enter the loan principle\n");
  scanf("%f", &principle);
  printf("Enter the interest rate\n");
  scanf("%f", &interest);
  printf("Enter the monthly payment\n");
  scanf("%f", &monthlyPay);

  float monthlyInterest = (interest / 100 / 12) + 1;
  printf("%f\n", monthlyInterest );

  remaining = principle * monthlyInterest - monthlyPay;
  printf("Remaining after first payment: %0.2f\n", remaining);
  remaining = remaining * monthlyInterest - monthlyPay;
  printf("Remaining after second payment: %0.2f\n", remaining);
  remaining = remaining* monthlyInterest - monthlyPay;
  printf("Remaining after third payment: %0.2f\n", remaining);

  return 0;
}
