/* Write a functoin named capitalize that capitalizes all letters in      * it's argument */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Takes a string is as input and modifies it such that all letters are   * capitalized 
 */
void capitalize(char *str){
    char temp[strlen(str)];
    char *p = &str[0];
    char *d = &temp[0];

    for(;*p; p++, d++){
        *d = toupper(*p);
    }
    *d = '\0';

    strcpy(str, temp);
}

int main(void){
    char str[] = "please don't crash";
    capitalize(str);
    puts(str);

    return 0;
}