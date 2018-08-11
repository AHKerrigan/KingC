/* Write a program that computes the scrabble score of a word 
 * MOD 13-8 - Modify such that the program includes the following
 *            int compute_scrabble_value(const char *word)*/

#include <stdio.h>

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

int compute_scrabble_value(const char *word){
    char *p = word;
    int score = 0;
    while(*p++){
      switch(*p){
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
    }
  return score;
}

int main(void){

  // Holds the current word
  char word[10];

  printf("Enter the word: ");
  read_line(word, 10);
  int score = compute_scrabble_value(word);


  printf("Scrabble value: %d", score);

  return 0;
}
