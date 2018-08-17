/* Explain the output of the given code 
 * 
 * Answer: Returns a locus for the equation i*i+i-12
 */
#include <stdio.h>

int f1(int (*f)(int)){
    int n = 0;

    while((*f)(n)){
        n++;
    }
    return n;
}

int f2(int i){
    return i * i + i - 12;
}

int main(void){
    printf("Answer: %d\n", f1(f2));
    return 0;
}