/* Write a program that 
 * a) Reads a message then checks whether it's a palindrome
 * b) Uses pointers instead of integers to keep track of positions in the array
 *
 * Mod 13-17: include bool is_palindrome(const char *message)
 */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>


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

bool is_palindrome(const char *message){
    char *p = message;
    char *d = &message[strlen(message) - 1];

    for(; p < d; p++, d--){
        if(*p != *d){
            return false;
        }
    }
    return true;
}

int main(void){
    char word[100];
    printf("Enter a word: ");
    read_line(word, 100);


    if(is_palindrome(word)){
        printf("Palindrome");
    }
    else{
        printf("Not a palindome");
    }
}