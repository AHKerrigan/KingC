/* Write a program that tests whether two works are anagrams 
 * MOD: 13-14: include the following function
   bool are_anagrams(const char *word1, const char *word2)
   */

#define ALPH 26
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


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

bool are_anagrams(const char *word1, const char *word2){
    int letters[ALPH] = {0};
    bool anaFlag = true;
    char *p = word1;

    // Fills up the character counts for word 1
    do{
        letters[tolower(*p) - 97]++;
        
    }while(*p++);
    p = word2;

    // Empties out the character counts for word 2
    do{
        letters[tolower(*p) - 97]--;
    }while(*p++);

    for(int i = 0; i < ALPH; i++){
        if(letters[i] != 0){
            anaFlag = false;
            break;
        }
    }
    return anaFlag;
}

int main(void){
    
    char word1[50];
    char word2[50];
    printf("Enter Word 1: \n");
    read_line(word1, 50);
    printf("Enter Word 2: \n");
    read_line(word2, 50);

  if(are_anagrams(word1, word2)){
    printf("The words are anagrams");
  }
  else{
      printf("The words are not anagrams");
  }

  return 0;
}
