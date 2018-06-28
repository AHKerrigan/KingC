/* Write a program that finds the largest and smallest of four integers entered
by the user */

#include <stdio.h>

int main(void){
  int num1, num2, num3, num4, temp1;
  printf("Enter four integers: \n");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  if(num1 < num2){
    temp1 = num1;
    num1 = num2;
    num2 = temp1;
  }

  if(num3 < num4){
    temp1 = num3;
    num3 = num4;
    num4 = temp1;
  }
  if(num1 < num3){
    temp1 = num1;
    num1 = num3;
    num3 = temp1;
  }
  if(num2 < num3){
    temp1 = num2;
    num2 = num3;
    num3 = temp1;
  }
  printf("The Largest Integer: %d\n", num1);
  printf("The Smalest Integer: %d\n", num4);


  return 0;
}
