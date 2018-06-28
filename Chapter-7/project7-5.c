/* Write a program that computes the scrabble score of a word */

#include <stdio.h>

int main(void){

  // Holds the currently read char
  char ch;
  unsigned short score = 0;

  printf("Enter the word: ");

  do{
    ch = getchar();
    // Instantly adds the score of the letter once read
    switch(ch){
      case 'a': case 'e': case 'i': case 'l': case 'n': case 'o': case 'r': case
      's': case 't': case 'u':
        score++;
        break;
      case 'd': case 'g':
        score += 2;
        break;
      case 'b': case 'c': case 'm': case 'p':
        score += 3;
        break;
      case 'f': case 'h': case 'v': case 'w': case 'y':
        score += 4;
        break;
      case 'k':
        score += 5;
        break;
      case 'j': case 'x':
        score += 8;
        break;
      case 'q': case 'z':
        score += 10;
        break;
    }
  }while(ch != '\n');

  printf("Scrabble value": %hu", score);

  return 0;
}
