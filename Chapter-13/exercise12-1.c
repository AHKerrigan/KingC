/* Which of the following printf functions actually write a newline  *    * character? 
 * I've commented out the incorrect ones
 */

#include <stdio.h>

int main(void){
    printf("-Here is the top line---\n");
    printf("%c", '\n');
    // printf("%c", "\n") Won't work, "" denotes string literal
    // printf("%s", '\n');
    printf("%s", "\n");
    // printf('\n'); printf expects pointer
    printf("\n");
    putchar('\n');
    // putchar("\n");
    // puts('\n');
    puts("\n");
    puts("");
    printf("-Here is the bottom line---\n");
    return 0;
}