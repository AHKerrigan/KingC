/* Write a program that prompts the user to enter two dates, then returns which
of the two dates occur first on the calender

6-10 MODIFY" Generalize the program so that the user may enter any number of
dates. The user will enter 0/0/0 to indicate that no more dates will be entered*/

#include <stdio.h>

int main(void){
  int month = 1, date = 1, year = 1, earliestMonth = 100, earliestDate = 100, earliestYear = 100;

  while(month != 0 && date != 0 && year != 0){
    printf("Enter a date (mm/dd/yy):");
    scanf("%d/%d/%d", &month, &date, &year);
    if(month == 0 && date == 0 && year == 0){
      break;
    }

    if(earliestYear > year){
      earliestMonth = month;
      earliestDate = date;
      earliestYear = year;
    }
    else if(earliestMonth > month && earliestYear == year){
      earliestMonth = month;
      earliestDate = date;
      earliestYear = year;
    }
    else if(earliestDate > date && earliestMonth == month && earliestYear == year){
      earliestMonth = month;
      earliestDate = date;
      earliestYear = year;
    }
  }

  printf("The earliest date is %d/%d/%d", earliestMonth, earliestDate;)
  if(year > 18){
    printf("19%d" earliestYear);
  }
  if(earliestYear < 18 && earliestYear > 9){
    printf("20%d", earliestYear);
  }
  else{
    printf("200%d", earliestYear);
  }
  return 0;
}
