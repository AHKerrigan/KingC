#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void){
  float far, cel;
  printf("Enter the temperature in Farenheit\n");
  scanf("%f", &far);
  cel = far*SCALE_FACTOR-FREEZING_PT;
  printf("The temperature in celcuis is %f\n", cel );
  return 0
}
