/* Modify the read_line function in each of the following ways
 * a) Have it skip white space before beginning to store input characters
 * b) Have it stop reading at the first white-space character
 * c) Have it stop reading at the first newline character and store it
 * d) Leave behind character it doesn't have space for
 */

#include <stdio.h>

int read_line(char str[], int n){
    int ch, i = 0;

    do{
        ch = getchar();
    }while(ch == ' ');

    do{
        if(i < n){
            str[i++] = ch;
        }
        ch = getchar();
        if(ch == '\n'){
            str[i++] = ch;
            break;
        }
    }while(ch != ' ');

    str[i] = '\0';
    return i;
}

int main(void){
    char str[10];
    read_line(str, 10);
    printf("%s", str);

}