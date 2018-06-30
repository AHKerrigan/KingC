/* Write a program that calculates the average word length for a sentence */

#include <stdio.h>

int main(void){

  char ch;
  printf("Enter a sentence: ");
  float letterTotal = 0;

  // The number of words in a setence is always spaces+1
  float spaceTotal = 1;

  do{
    ch = getchar();
    if(ch != ' '){
      letterTotal++;
    }
    else{
      spaceTotal++;
    }

  }while(ch != '\n');

  printf("Average word length: %f", letterTotal / spaceTotal);



  return 0;
}
