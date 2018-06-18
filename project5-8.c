/* write a progrma that asks the user to enter a time (24 hour clock) then
displays the departure and arrival time based on the table provided in the book*/

#include <stdio.h>

int main(void){  printf("%d %d %d %d\n ", num1, num2, num3, num4);
  int hour, minute, absoluteTime;
  printf("Enter the intended departure time: \n");
  scanf("%d:%d", &hour, &minute)

  absoluteTime = (hour * 60) + minute;
  if(absoluteTime > (2*60)+53){
    printf("Closest flight: Leaving at 8:10am, Arriving at 10:16am");
  }
  if(absoltueTime > (8*60)+52){
    printf("Closest flight: Leaving at 9:43am, Arriving at 11:52am");
  }

  return 0;


}
