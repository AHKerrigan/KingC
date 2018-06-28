/* Write a program that prints a one-month calendar. The user specifies the
number of days in the month and the day of the week on which the months begins */

#include <stdio.h>

int main(void){
  int days, week;
  printf("Enter the number of days: ");
  scanf("%d", &days);
  printf("\nEnter the starting day of the week: (1=Sun, 7=Sat) ");
  scanf("%d", &week);

  // Creates blank dates until we reach the start date
  for(int i = 1; i < week; i++){
    printf("   ");
  }

  // i represents the current day
  for(int i = 1; i <= days; i++){
    printf("%2d ", i);
    week++;
    if(week == 8){
      week = 1;
      printf("\n");
    }
  }

  return 0;
}
