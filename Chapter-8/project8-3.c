/* Example program that checks numbers for repeated digits

MOD: 8-3: Modify so that the user can enter more than one number to be entered */

#include <stdio.h>
#include <stdbool.h>

int main(void){

  bool digit_seen[10] = {false};
  int digit;
  long n;

  printf("Enter a number (Enter a number 0 or less to terminate): ");
  scanf("%ld", &n);

  while(n > 0){
    while(n > 0){
      digit = n % 10;
      if(digit_seen[digit]){
        break;
      }
      digit_seen[digit] = true;
      n /= 10;
      }

      if (n > 0){
        printf("Repeated digit\n");
      }
      else{
        printf("No repeated digit\n");
      }

      // Allows the user to repeat if they wish
      printf("Enter a number (Enter a number 0 or less to terminate): ");
      scanf("%ld", &n);

      // Empties out the digit_seen array
      for(int i = 0; i < 10; i++){
        digit_seen[i] = false;
      }
  }

  return 0;
}
