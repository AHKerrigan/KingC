/* Write a program that find sthe smallest and largest of a series of     * words entered by the user based on alphabetical order
 */
#include <stdio.h>
#include <string.h>

char wordList[20][20];

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

/* Takes a word list as input and assigns the first and last word alphabetical to first and last, respectively
 */
void firstLast(char *first, char *last){
    strcpy(first, wordList[0]);
    strcpy(last, wordList[0]);

    int i = -1;

    do{
        i++;
        if(strcmp(wordList[i], first) < 0){
            strcpy(first, wordList[i]);
        }
        else if(strcmp(wordList[i], last) > 0){
            strcpy(last, wordList[i]);
        }
    }while(strlen(wordList[i]) != 4);
}

int main(void){

    int i = -1;
    char first[20];
    char last[20];


    do{
        i++;
        printf("Enter word: ");
        read_line(wordList[i], 20);
    }while(strlen(wordList[i]) != 4);
    firstLast(first, last);

    puts(first);
    puts(last);

    printf("We didn't crash");
}