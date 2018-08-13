/* Write a program that
 * a) Writes a program that reads a message ten prints the reversal of  * the message
 * b) Revise it to use a pointer intead of an integer to keep track of   * the position in the array
 *
 * MOD 13-16: Include void reverse(char *message)
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

void reversal(char *message){
    char *p = &message[strlen(message) - 1];
    for(; p > &message[0]; p--){
        printf("%c", *p);
    }
     //prints the last character seperately to prevent seg fault

    printf("%c", message[0]);
}


int main(void){
    char message[100];
    char *p = message;

    printf("Enter a message: ");
    read_line(message, 100);

    printf("Reversal is: ");
    reversal(message);

    return 0;
}