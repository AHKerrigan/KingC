/* program for testing pointers */

#include <stdio.h>

int main(void){

  int *p, i = 5;
  p = &i;
  printf("%d", *p);
  return 0;
}
