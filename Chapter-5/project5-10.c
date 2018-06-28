/* Using switch statements, write a program that takes a grade in two digit number
form, and returns a letter grade */

#include <stdio.h>

int main(void){
  int grade, tenth;
  printf("Enter your grade: \n");
  scanf("%d", &grade);
  tenth = grade/10;

  switch (tenth) {
    case 10: case 9:
      printf("You earned an A\n");
      break;
    case 8:
      printf("You earned a B");
      break;
    case 7:
      printf("You earned a C");
      break;
    case 6:
      printf("You earned a D");
      break;
    default:
      printf("You earned an F");
      break;
  }
  return 0;
}
