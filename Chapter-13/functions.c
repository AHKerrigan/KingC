/* misc functions from the chapter */

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

int count_spaces(const char *s){
    int count = 0;

    for(; *s != '\0'; s++){
        if(*s == ' '){
            count++;
        }
    }

    return count;
}

int main(void){
    printf("Spaces: %d", count_spaces("The quick brown fox jumps over the lazy dog"));
}