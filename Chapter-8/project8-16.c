/* Write a program that tests whether two works are anagrams */

#define ALPH 26
#include <stdio.h>
#include <ctype.h>

int main(void){
  int letters[ALPH] = {0};
  char ch;
  int anaFlag = 1;

  printf("Enter first word: ");
  do{
    ch = getchar();
    if(isalpha(ch)){
      letters[tolower(ch) - 97]++;
    }
  }while(ch != '\n');

  printf("Enter second word: ");
  do{
    ch = getchar();
    if(isalpha(ch)){
      letters[tolower(ch) - 97]--;
    }
  }while(ch != '\n');

  for(int i = 0; i < ALPH; i++){
    if(letters[i] != 0){
      printf("The words are not anagrams");
      anaFlag = 0;
      break;
    }
  }

  if(anaFlag == 1){
    printf("The words are anagrams");
  }

  return 0;
}
