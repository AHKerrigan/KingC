/* Chapter 12 - Exercises 14 - 16:
 * Write a statement that uses the search function to look for the temp 32
 * Write a loop that prints all temperature readings in row 1 of the temperature array
 * Write a looop that prints the highest temperature in the temp array
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DAYS 7
#define HOURS 24

int find_largest(const int *a, int n){
    int largest = *a;

    for(n--; n >= 0; n--){
        if(*(a + n) > largest){
            largest = *(a+n);
        }
    }
    return largest;
}

bool search(int *a, int n, int key){
    for(int *p = a; p <= a + n; p++){
        if(*p == key){
            return true;
        }
    }
    return false;
}

int main(void){
    srand(3458324);
    int temperature[DAYS][HOURS];

    for(int x = 0; x < DAYS; x++){
        for(int y = 0; y < HOURS; y++){
            temperature[x][y] = rand() % 100;
        }
    }

    for(int x = 0; x < DAYS; x++){
        for(int y = 0; y < HOURS; y++){
            printf("%d ", temperature[x][y]);
        }
        printf("\n");
    }

    printf("\n");
    if(search(temperature[0], DAYS * HOURS, 32)){
        printf("The temperature 32 was in the array\n");
    }
    else{
        printf("The temperature 32 was not in the array\n");
    }

    //Loop that prints all the elements in row i
    int i = 3;
    printf("Day %d temperatures: ", i + 1);
    for(int *p = &temperature[i][0]; p < &temperature[i][HOURS]; p++){
        printf("%d ", *p);
    }
    printf("\n");

    //Loop that prints the hottest temperature for each day of the week
    for(i = 0; i < DAYS; i++){
        printf("Temperature for Day %d: %d\n", i + 1, find_largest(temperature[i], HOURS));
    }
}