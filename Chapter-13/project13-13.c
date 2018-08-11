/* Implements a Caesar Cipher 
 * Mod 13-13: Modify such that the program includes the following
 * void encrypt(char *message, int shift)
 */

#include <stdio.h>

void encrypt(char *message, int shift){
    int i;
    
    for(i = 0; message[i] != '\0'; i++){
        if(message[i] <= 'Z' && message[i] >= 'A'){
            message[i] = ((message[i] - 'A') + shift) % 26 + 'A';
        }
        else if(message[i] <= 'z' && message[i] >= 'a'){
            message[i] =  ((message[i] - 'a') + shift) % 26 + 'a';
        }
    }
}

int read_line(char str[], int n){
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if(i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

int main(void){
  char message[50];
  int shift;

  /* We get the first character outside so prevent the progranm from encrypting
    the newline */
  printf("Enter message to be encrypted: ");
  read_line(message, 50);

  /* Shift represents the number of shifts right in the alphabet each letter
    will experience */
  printf("Enter shift amount (1--25): ");
  scanf("%d", &shift);

  printf("Encrypted message: ");
  encrypt(message, shift);
    puts(message);




  return 0;
}
