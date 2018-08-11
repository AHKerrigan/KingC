/* Write a program that calculates the average word length for a sentence 
 * Mod 13-11: Include the following function
 * double compute_average_word_length(const char *sentence)
 */

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

double compute_average_word_length(const char *sentence){
    int spaceCount = 0;
    int characterCount = 0;

    // Simple algorith
    // The number of words in a sentence is always spaces + 1
    for(char *p = &sentence[0]; *p; p++){
        if(*p == ' '){
            spaceCount++;
        }
        else{
            characterCount++;
        }
    }

    return(characterCount / (spaceCount + 1));
}

int main(void){

  char sentence[100];
  printf("Enter a sentence: ");
  read_line(sentence, 100);
  printf("The average word length awas %lf", compute_average_word_length(sentence));



  return 0;
}
