/* Write the following function 
 * void remove_filename(char *url)
 * Takes a string representing a filename and removes the extension
 */

#include <stdio.h>
#include <string.h>

/* Removes the fileextension from a string literal by replacing the last
 * slash with a null character
 */
void remove_filename(char *url){
    char *p = &url[strlen(url) - 1];
    
    //Goes backwards and looks for a backslash
    while(*--p != '/');
    *p = '\0';
}

int main(void){
    char file[] = "http://www.knking.com/index.html";
    remove_filename(file);
    puts(file);

}