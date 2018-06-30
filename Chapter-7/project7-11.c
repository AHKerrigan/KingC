/* Write a program that takes a first name and last name entered by the user and
displays the lsat name, a comma, and the first initial, followed by a period*/

#include <stdio.h>

int main(void){
  printf("Enter a first and last name: ");
  char firstInitial;
  char ch;

  // Start by reading in the first first

  firstInitial = getchar();

  // Just ignores whatever else is typed in until its a space
  do{
    ch = getchar();
  }while(ch != ' ');
  // Gets the space out of the buffer

  ch = '\0';

  do{
    printf("%c", ch);
    ch = getchar();
  }while(ch != '\n');

  printf(", %c", firstInitial);
  return 0;
}
