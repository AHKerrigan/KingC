/* Solutions to both 12-10 and 12-11 */

#include <stdio.h>

int find_middle(const int *a, int n){
    // Splits n in half
    n /= 2;
    return *(a + n - 1);

}

int find_largest(const int *a, int n){
    int largest = *a;

    for(n--; n >= 0; n--){
        if(*(a + n) > largest){
            largest = *(a+n);
        }
    }
    return largest;
}

int main(void){
    int nums[10] = {1, 45, 32, 67, 223, 45, 76, 23, 56, 21};
    printf("Middle is %d\n", find_middle(nums, 10));
    printf("Largest is %d\n", find_largest(nums, 10));
    return 0;
}
