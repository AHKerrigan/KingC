/* Write a progrmam that uses pointers to create an identity matrix */

#include <stdio.h>
#define N 15

void identityMatrix(int *a, int n){
    int *p = a;

    for(p = a; p < a + (n * n); p += (n + 1)){
        *p = 1;
    }
}

int main(void){
    int matrix[N][N] = {0};
    identityMatrix(matrix[0], N);

    for(int x = 0; x < N; x++){
        for(int y = 0; y < N; y++){
            printf("%d ", matrix[x][y]);
        }
        printf("\n");
    }

}