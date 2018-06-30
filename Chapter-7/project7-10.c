/* Write a program that counts the number of vowels in a sentence */

#include <stdio.h>

int main(void){
  char ch;
  int vowelCount = 0;
  printf("Enter a word to have its vowel's counted: ");

  do{
    ch = getchar();
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
      vowelCount++;
    }
  }while(ch != '\n');

  printf("That word contains %d vowels", vowelCount);
  return 0;
}
