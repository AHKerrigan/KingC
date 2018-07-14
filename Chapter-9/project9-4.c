/* Write a program that tests whether two works are anagrams

MOD - 9-4: Modify 8-16 so that includes the functions void read_word()
and equal_array.

My orinal solution was better, but this one wants me to read two seperate arrays\
 */

#define ALPH 26
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[ALPH]){
  char ch;
  do{
    ch = getchar();
    if(isalpha(ch)){
      counts[tolower(ch) - 97]++;
    }
  }while(ch != '\n');
}

bool equal_array(int counts1[ALPH], int counts2[ALPH]){
  for(int i = 0; i < ALPH; i++){
    if(counts1[i] != counts2[i]){
      return false;
    }
  }

  return true;
}

int main(void){
  int s1[ALPH] = {0};
  int s2[ALPH] = {0};
  int anaFlag = 1;

  printf("Enter first word: ");
  read_word(s1);

  printf("Enter second word: ");
  read_word(s2);

  if(equal_array(s1, s2)){
    printf("The words are anagrams.");
  }
  else{
    printf("The words are not anagrams");
  }

  return 0;
}
