/* Write the following function
 * double inner_product(const doubel *a, const double *b, int n)
 */

#include <stdio.h>
#define N 10

double inner_product(const double *a, const double *b, int n){
    double product = 0;

    for(n--; n >= 0; n--){
        product += *(a + n) * *(b + n);
    } 
    
    return product;
}

int main(void){
    double a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double b[N] = {2, 4, 6, 5, 3, 8, 4, 12, 4, 12};

    printf("Inner product: %lf", inner_product(a, b, N));
    return 0;
}
