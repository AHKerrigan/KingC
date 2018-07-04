/* Example program that checks numbers for repeated digits

MODIFY: Modify repdigit.c so that it shows which digits, if any, were
 repeated

 Modify again to include a table of total occurances*/

#include <stdio.h>
#include <stdbool.h>

int main(void){

  // array that tracks occurances of each number by the index
  int digit_seen[10] = {0};

  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while(n > 0){
    digit = n % 10;
    digit_seen[digit]++;
    n /= 10;
  }

  // Table

  printf("Digit:     ");
  for(int i = 0; i < 10; i++){
    printf("%6d", i);
  }
  printf("\nOccurances:");
  for(int i = 0; i < 10; i++){
    printf("%6d", digit_seen[i]);
  }
  return 0;
}
