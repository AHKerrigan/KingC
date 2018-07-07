/* Write a program that translates an alphabetic phone number into numeric form

MOD: 8-11 - Modify the program so that it uses an array*/

#include <stdio.h>

int main(void){
  char ch;
  char number[16];
  int index = 0;
  printf("Enter phone number: ");
  do{
    ch = getchar();
    switch(ch){
      case 'A': case 'B': case 'C':
        number[index] = '2';
        break;
      case'D': case 'E': case 'F':
        number[index] = '3';
        break;
      case 'G': case 'H': case 'I':
        number[index] = '4';
        break;
      case 'J': case 'K': case 'L':
        number[index] = '5';
        break;
      case 'M': case 'N': case 'O':
        number[index] = '6';
        break;
      case 'P': case 'R': case 'S':
        number[index] = '7';
        break;
      case 'T': case 'U': case 'V':
        number[index] = '8';
        break;
      case 'W': case 'X': case 'Y':
        number[index] = '9';
        break;
      default:
        number[index] = ch;
        break;
    }
    index++;
  }while(ch != '\n');

  // prints the number
  for(int i = 0; number[i] != '\0'; i++){
    printf("%c", number[i]);
  }
  return 0;
}
