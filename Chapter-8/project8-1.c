/* Example program that checks numbers for repeated digits

MODIFY: Modify repdigit.c so that it shows which digits, if any, were
 repeated */

#include <stdio.h>
#include <stdbool.h>

int main(void){

  // The array keeps track which digits were repeated, flag if ANY were repeated
  bool flag = false;
  int digit_seen[10] = {0};

  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while(n > 0){
    digit = n % 10;

    if(digit_seen[digit] == 0){
      digit_seen[digit]++;
    }
    else if(digit_seen[digit] == 1){
      digit_seen[digit]++;
      flag = true;
    }
    n /= 10;
  }

  if (flag){
    printf("Repeated digit: ");
    for(int i = 0; i < 10; i++){
      if(digit_seen[i] > 1){
        printf("%d ", i);
      }
    }
  }
  else{
    printf("No repeated digit\n");
  }
  return 0;
}
