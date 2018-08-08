/* Write a program that
 * a) Writes a program that reads a message ten prints the reversal of  * the message
 * b) Revise it to use a pointer intead of an integer to keep track of   * the position in the array
 */

 #include <stdio.h>

int main(void){
    char message[100];
    char *p = message;
    char ch;

    printf("Enter a message: ");

    do{
        ch = getchar();
        *p = ch;
        p++; 

    }while(ch != '\n');
    
    // Gets that pesky newline out of the array 
    *(p - 1) = '';

    printf("Reversal is: ");

    for(; p >= message; p--){
        printf("%c", *p);
    }
    return 0;
}