/* Write a program that takes input from the command line and echos       * those arguments back in reverse
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    
    for(int i = argc - 1; i >= 0; i--){
        printf("%s ", argv[i]);
    }
}