/* Let a be an array of 100 integers. Write a call of qsort that sorts
 * only the last 50 elements in a
 */
#include <stdio.h>
#include <stdlib.h>

int compareInts(const void *p, const void *q){
    const int *p1 = p;
    const int *q1= q;

    return *p1 - *q1;
}

int main(void){
    srand(4433);
    int a[100];

    for(int i = 0; i < 100; i++){
        a[i] = rand() % 1000;
    }

    qsort(&a[50], 50, sizeof(int), compareInts);
    for(int i = 0; i < 100; i++){
        printf("%d ", a[i]);
    }
    printf("\n\n%d", compareInts(&a[0], &a[1]));
    return 0;
}

