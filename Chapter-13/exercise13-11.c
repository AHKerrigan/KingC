/* Write the strcmp functoin using pointers */

#include <stdio.h>

int strcmp(char *s, char *t){
    
    for(; *s == *t; s++, t++){
        if(*s == '\0'){
            return 0;
        }
    }
    return *s - *t;
}

int main(void){
    printf("%d", strcmp("Hallo", "Hello"));
}