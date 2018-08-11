/* Write a program that counts the number of vowels in a sentence 
 * MOD 13-9: Modify to include the following function
 * int compute_vowel_count(const char *sentence)
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

int compute_vowel_count(const char *sentence){
    char *p = sentence;
    int vowelCount = 0;
    while(*p++){
        if(*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u'){
            vowelCount++;
        }
    }
    return vowelCount;
}

int main(void){
  char sentence[100];
  printf("Enter a sentence to have its vowel's counted: ");
  read_line(sentence, 100);

  printf("That word contains %d vowels\n", compute_vowel_count(sentence));
  return 0;
}
