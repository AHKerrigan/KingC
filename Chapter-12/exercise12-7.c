/* Write the following function
 * bool search(const int a[], int n, int key)
 */

#include <stdio.h>
#include <stdbool.h>

bool search(int a[], int n, int key){
    for(int *p = &a[0]; p <= &a[n - 1]; p++){
        if(*p == key){
            return true;
        }
    }
    return false;
}

int main(void){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


    printf("%d\n", search(a, 10, 5));
    printf("%d", search(a, 10, 42));
}