/* Write a program that asks the user for a 24 hour time, then displays the time
in 12 hour form */

#include <stdio.h>

int main(void) {
  int hour, minute;

  printf("Enter a 24-hour time:\n");
  scanf("%d:%d", &hour, &minute);

  if(hour < 12) {
    printf("Equivalent 12-hour time: %d:%d AM", hour, minute);
  }
  else {
    printf("Equivalent 12-hour time: %d:%d PM", (hour == 12 ? 12 : hour%12), minute);
  }
  return 0;
}
