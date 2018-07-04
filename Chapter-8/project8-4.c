/* Example program that reverses a series of numbers

MOD: Modify reverse.c do use a macro for the array length*/

#include <stdio.h>
#define N 10
#define ARRAY_SIZE (int)(sizeof(a)/size(a[0]))

int main(void){
  int a[N], i;
  printf("Enter %d numbers: ", N);
  for(i = 0; i < N; i++){
    scanf("%d", &a[i]);
  }

  printf("In reverse order: ");
  for(i = N - 1; i >= 0; i--){
    printf(" %d", a[i]);
  }
  printf("\n");
  return 0;
}
