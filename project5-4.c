/* Implement the Beaufort scale */

#include <stdio.h>

int main(void) {
  int windSpeed;

  printf("Enter the wind speed in knots: \n");
  scanf("%d", &windSpeed);

  if(windSpeed == 0) {
    printf("The wind is calm");
  }
  else if(windSpeed <= 3) {
    printf("The wind is a light air\n");
  }
  else if(windSpeed <= 27) {
    printf("The wind is a breeze");
  }
  else if(windSpeed <= 47) {
    printf("The wind is a gale");
  }
  else if(windSpeed <= 63) {
    printf("The wind is a storm");
  }
  else {
    printf("The wind is a hurricane \n");
  }
}
