/* Write a program that takes a first name and last name entered by the user and
displays the last name, a comma, and the first initial, followed by a period

MOD: 8-13 - Modify the program so that it uses an array and the output is labled
*/

#include <stdio.h>

int main(void){
  printf("Enter a first and last name: ");
  char firstInitial;
  char ch;

  char lastName[20];

  // Start by reading in the first first
  firstInitial = getchar();

  // Just ignores whatever else is typed in until its a space
  do{
    ch = getchar();
  }while(ch != ' ');

  // Gets the space out of the buffer
  ch = '\0';

  // Reads in the last name
  for(int i = 0; ch != '\n'; i++){
    ch = getchar();
    lastName[i] = ch;
  }

  printf("You entered the name: ");

  // Ends when the newline character from above is found
  for(int i = 0; lastName[i] != '\n'; i++){
    printf("%c", lastName[i]);
  }
  printf(", %c", firstInitial);
  return 0;
}
