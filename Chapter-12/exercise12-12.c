/* Write the following function 
 * void find_two_largest(const int *a, int n, int *largest, 
 * *second_largest)
*/

#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest){
    *largest = *a;
    *second_largest = *a;
    int *p;

    for(p = a; p < a + n; p++){
        if(*largest < *p){
            *second_largest = *largest;
            *largest = *p;
        }
        else if(*second_largest < *p){
            *second_largest = *p;
        }
    }
}

int main(void){
    int largest;
    int second_largest;

    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    find_two_largest(nums, 10, &largest, &second_largest);

    printf("Largest: %d\nSecond: %d", largest, second_largest);
    return 0;
}