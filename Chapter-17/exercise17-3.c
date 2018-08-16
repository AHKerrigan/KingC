/* Write the following function
 * int *create_array(int n, int initial_value);
 * The function should return a pointer to a dynamically allocated int   * array with n members, each of which is initialized to initial_value.  * The return value should be NULL if the array cannot be allocated
 */

#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value){
    int *p = malloc(n * sizeof(int));
    if(p == NULL){
        printf("Error: Could not allocate space for array");
        return NULL;
    }
    for(int i = 0; i < n; i++){
        p[i] = initial_value;
    }
    return p;
}

int main(void){
    int *a = create_array(50, 5);
    for(int i = 0; i < 50; i++){
        printf("Value %d: ", i + 1);
        printf("%d\n", a[i]);
    }
    return 0;
}