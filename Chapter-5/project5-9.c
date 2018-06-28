/* Write a program that prompts the user to enter two dates, then returns which
of the two dates occur first on the calender */

#include <stdio.h>

int main(void){
  int month1, month2, day1, day2, year1, year2;

  printf("Enter the first date: \n");
  scanf("%d/%d/%d", &month1, &day1, &year1);
  printf("Enter the second date: \n");
  scanf("%d/%d/%d", &month2, &day2, &year2);

  if(year1 == year2 && month1 == month2 && day1 == day2 ){
    printf("Both dates are the same");
  }
  if(year1 > year2){
    printf("The second date came first");
  }
  else if(year2 > year1){
    printf("The first date came frist");
  }
  else if(month1 > month2){
    printf("The second date came first");
  }
  else if(month2 > month1){
    printf("The first date came first");
  }
  else if(day1 > day2){
    printf("The second date came first");
  }
  else{
    printf("The first date came first");
  }
      return 0;
}
