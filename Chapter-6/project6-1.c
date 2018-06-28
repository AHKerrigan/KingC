/* Erite a program that finds the largest in a series of numbers entered by the
user. The program must prompt the user to enter numbres one by one. When the user
enters 0 or a negative number, the program must display the largest nonnegative
number entered */

#include <stdio.h>

int main(void){

  float num = 1, largest = 0;

  while(num != 0){
    printf("Enter a number ");
    scanf("%f", &num);
    if(num > 0 && num > largest){
      largest = num;
    }
  }
  printf("The largest number was %f", largest);
  return 0;
}
