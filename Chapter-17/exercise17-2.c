/* Write a function named duplicate that uses dynamic storage allocation  * to create a copy of a string
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(char *str){
    char *p = malloc(strlen(str) + 1);
    if(p == NULL){
        printf("Error: Failed to allocate space for duplicate string");
        return NULL;
    }
    strcpy(p, str);
    return p;
}

int main(void){
    char *a = "Hello World";
    char *p = duplicate(a);
    puts(p);
}