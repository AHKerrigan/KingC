 /* Write the following function

    void find_two_largest(int a[], int n, int *largest, int *second_largest);
*/

#include <stdio.h>

/* Takes an array of integers and assigns the largest and second largest to two
 * respective addresses.
*/
void find_two_largest(int a[], int n, int *largest, int *second_largest){
  int temp;

  for(int i = 0; i < n; i++){
    if(a[i] > *largest){
      temp = *largest;
      *largest = a[i];
      *second_largest = temp;
    }
    else if(a[i] > *second_largest){
      *second_largest = a[i];
    }
  }
}

int main(void){
  int a[10] = {3, 6, 2, 4, 6, 3, 8, 3, 2, 10};
  int largest = 0, second_largest = 0;
  find_two_largest(a, 10, &largest, &second_largest);

  printf("Largest = %d\nSecond Largest = %d", largest, second_largest);
}
