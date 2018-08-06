/* Rewrite the function in the book to use pointer arithmatic instead of array
 * subscripting */

#include <stdio.h>

int sum_array(const int a[], int n){
    int sum;

    sum = 0;
    for(;n > 0; n--){
        sum += *(a + (n-1));
    }
    return sum;
}

int main(void){
    int a[] = {1, 2, 3, 4, 5, 6};
    printf("Sum: %d\n", sum_array(a, 6));
    return 0;
}