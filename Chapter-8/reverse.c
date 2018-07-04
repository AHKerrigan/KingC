/* Example program that reverses a series of numbers */

#include <stdio.h>
#define ARRAY_SIZE (int)(sizeof(a) / sizeof(a[0]))

int main(void){
  int a[10], i;
  printf("Enter %d numbers: ", ARRAY_SIZE);
  for(i = 0; i < ARRAY_SIZE; i++){
    scanf("%d", &a[i]);
  }

  printf("In reverse order: ");
  for(i = ARRAY_SIZE - 1; i >= 0; i--){
    printf(" %d", a[i]);
  }
  printf("\n");
  return 0;
}
