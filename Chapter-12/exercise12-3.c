#define N 10
#include <stdio.h>


int main(void){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a[0], *q = &a[N-1], temp;

    while(p < q){
        temp = *p;
        *p++ = *q;
        *q-- = temp; 
    }

    for(int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }

    return 0;
}