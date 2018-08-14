/* Suppose enum {FALSE, TRUE} b;
int i

which of the statements in main are valid?
*/

#include <stdio.h>

int main(void){
    enum {FALSE, TRUE} b;
    int i;

    b = FALSE;
    b = i;
    b++;
    i = b;
    i = 2 * b + 1;
}