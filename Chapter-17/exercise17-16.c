/* Write the following function. The call sum(g, i, j) should return 
 * g(i) +....+g(j)
 * int sum(int (*f)(int), int start, int end);
 */
#include <stdio.h>

int sum(int (*f)(int), int start, int end){
    int total = 0;
    for(int n = start; n <= end; n++){
        total += f(n);
    }
    return total;
}

int square(int n){
    return n * n;
}

int main(void){
    printf("%d", sum(square, 1, 5));
}