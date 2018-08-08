/* Write a program that 
 * a) Reads a message then checks whether it's a palindrome
 * b) Uses pointers instead of integers to keep track of positions in   * the array
 */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void){
    char word[100];
    char ch;
    char *p, *d;
    p = word;
    d = word;
    bool palFlag = true;

    printf("Enter a message: ");
    do{
        ch = getchar();
        if(isalpha(ch)){
            *p = tolower(ch);
            p++; 
        }
    }while(ch != '\n');
    p--;

    for(; d <= p; d++, p--){
        if(*d != *p){
            palFlag = false;
        }
    }


    if(palFlag){
        printf("Palindrome");
    }
    else{
        printf("Not a palindome");
    }
}