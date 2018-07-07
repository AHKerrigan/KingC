/* Write a program that computes the scrabble score of a word

MOD: 8-12 - Modify the program so that the SCRABBLE values are stored in an array*/

#include <stdio.h>

int main(void){

  // Holds the currently read char
  char ch;
  unsigned int total = 0;

  //Generates the score "sheet". The index of the array corresponds to the
  // index of the letter being scored

  int scores[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1,
                    1, 1, 4, 4, 8, 4, 10};


  printf("Enter the word: ");

  do{
    ch = getchar();
    if(ch != '\n'){
      total += scores[(int)ch - 65];
    }
  }while(ch != '\n');

  printf("Scrabble value: %hu", total);

  return 0;
}
