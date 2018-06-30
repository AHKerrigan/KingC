/* Write a program that uses Newton's method to compute the square root of a
positive floating-point number */

#include <stdio.h>
#include <math.h>

int main(void){
  double x;
  printf("Enter a positive number: ");
  scanf("%lf", &x);


  // For our first guess of y, we'll just start with x/4
  double y;
  y = x / (double)4;
  double average = (y + (x/y)) / 2;

  // Newton's method check
  while(fabs(y - average) > 0.00001 * average){
    /*printf("%f y = %f \n", average, y); */

    y = average;
    average = (y + (x/y)) / 2;
  }



  printf("Square root %f", average);
  return 0;


}
