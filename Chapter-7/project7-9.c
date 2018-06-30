/* Write a program that asks the user for a 12-hour time, then displays the time
in 24-hour form */

#include <stdio.h>

int main(void){
  int minute, hour;

  // What will determine if the its am or pm. The m doesn't matter
  char noonMod;
  printf("Enter a 12 hour time: ");
  scanf("%d:%d %1c", &hour, &minute, &noonMod);
  if(noonMod == 'p'){
    hour += 12;
  }
  printf("Equivilant 24-hour time: %d:%d", hour, minute);


  return 0;
}
