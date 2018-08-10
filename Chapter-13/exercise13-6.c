/* Write a function that modifies a string such that it censors all   instances of the word "foo"
 */
 #include <stdio.h>
 #include <string.h>

 void censor(char *str){
     char temp[strlen(str)];
     char *p = &str[0];
     char *d = &temp[0];

    // Copies str into temp
    // If it finds foo, it just censors as outlined
    for(; *p; p++, d++){
         if(*p == 'f' && *(p+1) == 'o' && *(p+2) == 'o'){
             *d++ = 'x';
             *d++ = 'x';
             *d = 'x';
             p += 2;
         }
         else{
             *d = *p;
         }

     }
    *d = '\0';
    strcpy(str, temp);
 }

 int main(void){
     char str[] = "food fool";
     censor(str);
     puts(str);
 }