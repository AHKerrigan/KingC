/* Condense count spaces by replcaing the for loop with a while loop */
#include <stdio.h>
#include <string.h>

int count_spaces(const char *s){
    int count = 0;

    while(*s++ != '\0'){
        if(*s == ' '){
            count++;
        }
    }
    return count;
}

int main(void){
    printf("Spaces: %d", count_spaces("The quick brown fox jumps over the lazy dog"));
}