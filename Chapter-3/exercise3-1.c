/* Write a program that accepts a date from the user in the form mm/dd/yyyy
the displays it in the form yyyymmdd */

#include <stdio.h>

int main(void) {
  int month, year, day;
  printf("Enter a date in the form mm/dd/yyyy\n");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("%d%d%d", year, month, day);
  return 0;
}
