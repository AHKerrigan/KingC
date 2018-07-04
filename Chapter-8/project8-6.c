/* Write a program that implements a "B1FF" filter such that A->4, b->8, E->3,
I->1, O->0, S->5 */

#include <stdio.h>
#include <ctype.h>

int main(void){
  char message[50];
  char c;
  int i = 0;

  printf("Enter message: ");
  do{
    c = toupper(getchar());
    message[i] = c;
    i++;
  }while(c != '\n');

  printf("In BIFF-speak: ");
  for(i = 0; message[i] != '\0'; i++){
    switch(message[i]){
      case 'A':
        printf("4");
        break;
      case 'B':
        printf("8");
        break;
      case 'E':
        printf("3");
        break;
      case 'I':
        printf("1");
        break;
      case 'O':
        printf("0");
        break;
      case 'S':
        printf("5");
        break;
      default:
        printf("%c", message[i]);
    }
  }
  return 0;
}
