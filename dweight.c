#include <stdio.h>
#define INCHES_PER_POUND 1766

int main(void) {
  int height, length, width, volume, weight;

  printf("Enter height of box: \n");
  scanf("%d", &height);
  printf("Enter the length of the box: \n");
  scanf("%d", &length);
  printf("Enter width of the box: \n");
  scanf("%d", &width );
  volume = length*height*width;
  weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
  printf("Dimensions: %dx%dx%d\n", height, length, width);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

}
