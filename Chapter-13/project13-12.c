/* Write a program that revereses a sentence 
 * MOD 13-12 - Modify so that it sotres the words in a two dimensional
 * char array as it reads the sentence
 */

#include <stdio.h>

int main(void){

    // The sentence to be reversed
    char sentence[30][20];
    char ch;
    // Keeps track of which word we are at  
    int x = 0;
    int y = 0;
    printf("Enter a sentence: ");

    while(ch != '\n'){
        ch = getchar();
        if(ch == ' ' || ch == '\n'){
            sentence[x][y] = '\0';
            x++;
            y = 0;
        }
        else{
            sentence[x][y] = ch;
            y++;
        }
    }

    // Now just goes backwards
    printf("Now the sentence backwards: ");
    for(x--; x >= 0; x--){
        printf("%s ", sentence[x]);
    }

    return 0;
}
