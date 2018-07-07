/* Implements a Caesar Cipher */

#include <stdio.h>

int main(void){
  char message[50], ch;
  int shift, i;

  /* We get the first character outside so prevent the progranm from encrypting
    the newline */
  printf("Enter message to be encrypted: ");
  ch = getchar();
  for(i = 0; ch != '\n'; i++){
    message[i] = ch;
    ch = getchar();
  }

  /* Shift represents the number of shifts right in the alphabet each letter
    will experience */
  printf("Enter shift amount (1--25): ");
  scanf("%d", &shift);

  printf("Encrypted message: ");
  for(i = 0; message[i] != '\0'; i++){
    if(message[i] <= 'Z' && message[i] >= 'A'){
      printf("%c", ((message[i] - 'A') + shift) % 26 + 'A');
    }
    else if(message[i] <= 'z' && message[i] >= 'a'){
      printf("%c", ((message[i] - 'a') + shift) % 26 + 'a');
    }
    else{
      printf("%c", message[i]);
    }
  }




  return 0;
}
