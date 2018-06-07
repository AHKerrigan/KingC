/* Write a program that formats product information entered by the user
The correct format is in the book */

#include <stdio.h>

int main(void) {
  int itemNumber;
  float unitPrice;
  int month, day, year;

  printf("Enter item number: \n");
  scanf("%d", &itemNumber);
  printf("Enter unit price: \n");
  scanf("%f", &unitPrice);
  printf("Enter purchase data (mm/dd/yyy): \n");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\tUnit\tPurchase\n");
  printf("\tPrice\tDate\n");
  printf("%d\t$ %0.2f\t%d/%d/%d", itemNumber, unitPrice, month, day, year);
  return 0;
}
