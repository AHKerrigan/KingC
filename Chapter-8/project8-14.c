/* Write a program that revereses a sentence */

#include <stdio.h>

int main(void){

  // The sentence to be reversed
  char sentence[100];
  char ch, punc;
  int i, n;

  printf("Enter a sentence: ");
  for(i = 0; ch != '!' && ch != '.' && ch != '?'; i++){
    ch = getchar();
    sentence[i] = ch;
  }

  // Saves the last character as the punctuation
  punc = ch;

  /* Goes backward until a space is reached, then prints out characters until it
      reaches the punctuation or another space */
  printf("Reversal of sentence: ")
  for(i -= 1; i != -1; i--){
    if(sentence[i] == ' '){
      for(n = i + 1; sentence[n] != ' ' && sentence[n] != punc; n++){
        printf("%c", sentence[n]);
      }
      printf(" ");
    }
  }
  // Does one more loop to take care of the last character
  for(n = i + 1; sentence[n] != ' ' && sentence[n] != punc; n++){
    printf("%c", sentence[n]);
  }
  printf("%c", punc);
  return 0;
}
