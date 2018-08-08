/* Write a program that revereses a sentence 
 * MOD: 12-5 - Modify so that it uses a pointer instead of an array to  * keep track of the current position in th array that contains the *  sentence.*/

#include <stdio.h>

int main(void){

  // The sentence to be reversed
  char sentence[100];
  char punc, ch;
  char *p = sentence;
  char *d;

  printf("Enter a sentence: ");
  for(; ch != '!' && ch != '.' && ch != '?'; p++){
    ch = getchar();
    *p = ch;
  }

  /* Saves the last character as the punctuation, then replaces it with a space */
  p--;
  punc = *p;
  *p = ' ';
  p--;

  /* Goes backward until a space is reached, then prints out characters until it reaches the punctuation or another space */
  printf("Reversal of sentence: ");
  for(; p > sentence; p--){
      if(*p == ' '){
        for(d = p + 1; *d != ' '; d++){
            //printf("We made it into this loop and *d is %c\n", *d);
            printf("%c", *d);
        }
        printf(" ");
      }
  }

  /* Does a differently structured loop for the last word to prevent a    * segmentation fault 
   */

    for(; *p != ' '; p++){
        printf("%c", *p);
    }
    printf("%c", punc);
    return 0;
}
