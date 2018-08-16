/* Write a function that condenses malloc */

#include <stdio.h>
#include <stdlib.h>

void *my_malloc(int n){
    void *p;
    p = malloc(n);
    if(p == NULL){
        printf("Error memory allocation failed");
        exit(EXIT_FAILURE);
    }
    return p;
}

int main(void){
    int *a;
    a = my_malloc(sizeof(int) * 100);
    return 0;
}