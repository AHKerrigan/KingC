/* Modify the quicksort algorithm so that low, high, and middle are     pointers to array elements rather than integers. The split function will need to return a pointer, not an integer */

#include <stdio.h>
#define N 10

int *split(int *a, int *low, int *high){
    int part_element = *low;

    for(;;){
        while(low < high && part_element <= *high){
            high--;
        }
        if(low >= high){
            break;
        }
        *low = *high;
        low++;
        

        while(low < high && *low <= part_element){
            low++;
        }
        if(low >= high){
            break;
        }
        *high = *low;
        high--;
    }

    *high = part_element;
    return high;
}

void quicksort(int *a, int *low, int *high){
    int *middle;
    if(low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);

}

int main(void){
    int a[N];

    printf("Enter %d numbers to be sorted: ", N);
    for(int *p = a; p < (a + N); p++){
        scanf("%d", &*p);
    }
    quicksort(a, a, a+N-1);
    

    printf("In sorted order: ");
    for(int *p = a; p < (a + N); p++){
        printf("%d ", *p);
    }
    printf("\n");
}