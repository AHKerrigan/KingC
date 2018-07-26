/* program for testing pointers */

#include <stdio.h>

int main(void){



  int *p, *q, i = 5;

  /*
  printf("*p = %d\n", *p);
  printf("*&p = %d\n", *&p);
  printf("*&i = %d\n", *&i);
  printf("&p = %d\n", &p);
  printf("&*p = %d\n", &*p);
  printf("&i = %d\n", &i);
  //printf("&*i = %d\n", &*i);
  */

  *p = *q;

  printf("%d", p);
  return 0;
}
