/* Write a program that sorts a series of words entered by the user
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 20

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

// I feel this solution is easier to read than the one in the book
int compare_strings(const void *p, const void *q){
    
    const char *s1 = p;
    const char *s2 = q;
    return strcmp(s1, s2);
    
    //return strcmp(*(char **)p, *(char **)q);
}

int main(void){
    int wordCount = 1;
    int i = 0;
    char **wordlist;
    wordlist = malloc(sizeof(char[MAX_LEN]) * wordCount);
    

    // Continues to get input from the user until a blank is recorded
    while(1){
        printf("Enter word: ");
        wordlist[i] = malloc(sizeof(char) * MAX_LEN);
        read_line(wordlist[i], MAX_LEN);
        if(strcmp(wordlist[i], "") == 0){
            break;
        }
        i++;
        wordCount++;

        // Increments the size of the wordlist
        wordlist = realloc(wordlist, sizeof(char[MAX_LEN]) * wordCount);
    }

    qsort(wordlist, wordCount, sizeof(char*), compare_strings);
    // Prints all the words in the wordlist.
    printf("In Sorted Order: ");
    for(int n = 0; n < wordCount; n++){
        printf("%s ", wordlist[n]);
    }

    return 0;
}