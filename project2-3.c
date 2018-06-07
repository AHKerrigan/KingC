/* Write a program that computes the volume of a sphere with
a 10 meter radius, using the formula v = 4/3pir^3. Write the fraction
4/3 as 4.0f/3.0f */

#include <stdio.h>
#define VOLUME_CONSTANT (4.0f/3.0f)*3.14

int main(void) {
  float radius;
  printf("Enter the radius in meters\n");
  scanf("%f", &radius );
  float v = VOLUME_CONSTANT * (radius*radius*radius);
  printf("%f", v);
  return 0;
}
