#include <stdio.h>
#include <string.h>

int main(void){
    char str[50], s1[50], s2[50];
    strcpy(str, "tire-bouchon");
    strcpy(&str[4], "d-or-wi");
    strcat(str, "red?");
    puts(str);
    printf("\n");

    strcpy(s1, "computer");
    strcpy(s2, "science");
    if(strcmp(s1, s2) < 0){
        strcat(s1, s2);
    }
    else{
        strcat(s2, s1);
    }
    s1[strlen(s1) - 6] = '\0';

    puts(s1);
    return 0;
}