/*Write a swap function as outlined in the book */

#include <stdio.h>

void swap(int *p, int *q){
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

int main(void){
  int i = 5;
  int q = 4;

  swap(&i, &q);

  printf("The output should be %d = 5 and %d = 4", q, i);
}
