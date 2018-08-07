/* Rewrite the function in the book to use pointer arithmatic instead of  * array subscripting. In other words, eliminate the variasbles i and j   * and all uses of the [] operator */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 10

// Given the area of an array, returns the total sum
int sum_two_dimensional_array(const int *a, int n){
    int sum = 0;
    
    for(int *p = a; p < a + n; p++){
        sum += *p;
    }
    return sum;
}

int main(void){
    srand(time(NULL));
    int nums[LEN][LEN];

    for(int x = 0; x < LEN; x++){
        for(int y = 0; y < LEN; y++){
            nums[x][y] = rand() % 100;
        }
    }

    printf("The total sum of the array is %d", sum_two_dimensional_array(nums[0], LEN*LEN));

     
    return 0;
}