/* Write the following function

  int *find_largest(int a[], int n);
*/

#include <stdio.h>

int *find_largest(int a[], int n){
  int *num;
  num = &a[0];

  for(int i = 0; i < n; i++){
    if(a[i] > *num){
      num = &a[i];
    }
  }
  return num;
}

int main(void){
  int a[10] = {1, 4, 6, 3, 8, 12, 65, 3, 76, 10};

  printf("The largest value is %d", *find_largest(a, 10));
}
