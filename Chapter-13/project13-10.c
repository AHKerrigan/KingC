/* Write a program that takes a first name and last name entered by the user and
displays the lsat name, a comma, and the first initial, followed by a period
 * MOD 13-10: Modify scu hthat the program includes the following function
 * void reverse_name(char *name)
 */

#include <stdio.h>
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

void reverse_name(char *name){
    char modifiedName[strlen(name)];
    char firstInitial;
    char *p = name;
    char *d = modifiedName;
    // Searches for the end of whitspace, gets the first initial, then
    // searches for the beginning of the last name
    
    for(;*p == ' '; p++);
    firstInitial = *p;
    for(;*p != ' '; p++);
    for(;*p == ' '; p++);

    for(; *p != ' ' && *p != '\0'; p++, d++){
        *d = *p;
    }
    *d++ = ',';
    *d++ = ' ';
    *d++ = firstInitial;
    *d = '\0';

    strcpy(name, modifiedName);
}

int main(void){
  printf("Enter a first and last name: ");
  char name[100];
  read_line(name, 100);
  reverse_name(name);
  puts(name);

  return 0;
}
