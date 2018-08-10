/* Write the following function
 * bool test_extension(const char *file_name, const char *extension);
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension){
    char *p = file_name;
    char *d = extension;

    while(*p++){
        if(*(p-1) == '.'){
            break;
        }
    }
    // Checks to see if they are the same size first
    if(strlen(d) != strlen(p)){
        return false;
    }
    for(;*p; p++, d++){
        if(toupper(*p) != *d){
            return false;
        }
    }
    return true;
}

int main(void){
    printf("First: %d\nSecond: %d\n", test_extension("hi.txt", "TXT"), 34234);
}