/* Write a function get_extension(const char *file_name, char *extension) * that takes a filename as input and stores the extension 
 */

#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension){
    int i;

    for(i = 0; file_name[i-1] != '.'; i++){
    }
    strcpy(extension, &file_name[i]);
}

int main(void){
    char file[] = "Memes.topkek";
    char extension[10];
    get_extension(file, extension);
    puts(extension);
}