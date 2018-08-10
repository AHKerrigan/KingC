#include <stdio.h>
#include <string.h>

char *duplicate(const char *p){
    char *q;

    strcpy(q, p);
    return q;
}

int main(void){
    char q[] = "Hello";
    puts(duplicate(q));
}