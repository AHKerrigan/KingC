/* Write a function that takes a domain name and appends the proper html  * prefix and postfix 
 */
#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url){
    strcat(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}

int main(void){
    char index[50];
    build_index_url("twitter.com", index);
    puts(index);
}