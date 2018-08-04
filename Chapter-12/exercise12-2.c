#include <stdio.h>

int main(void){
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *low = &a[0], *high = &a[7], *middle;

    middle = low + (high - low) / 2;

    printf("%d", *middle);


    return 0;
}
