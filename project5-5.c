/* Based on a table in the book, write a program that asks the user to enter the
amount of taxable income, then displays the tax due

Page 96 */

#include <stdio.h>
int main(void) {
  float income, tax;
  printf("Enter the amount of taxable income: \n");
  scanf("%f", &income);
  if(income <= 750) {
    tax = 0.01*income;
  }
  else if(income <=2250){
    tax = 7.5 + (income - 750) * 0.02;
  }
  else if(income <=3750) {
    tax = 37.5 + (income - 2250) * 0.03;
  }
  else if(income <= 5250) {
    tax = 82.5 + (income - 3750) * 0.04;
  }
  else if(income <= 7000) {
    tax = 142.5 + (income - 5250) * 0.05;
  }
  else {
    tax = 230.0 + (income - 7000) * 0.06;
  }
  printf("The tax is %0.2f", tax);

  return 0;
}
