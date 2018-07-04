/* Write a program that reads a 5x5 array of integers and then prints the row
sums and the column sums

*/

#include <stdio.h>

int main(void){
  int grid[5][5];
  int sum = 0;

  // Inputting the grid
  for(int x = 0; x < 5; x++){
    printf("Enter row %d: ", x+1);
    scanf("%d %d %d %d %d", &grid[x][0], &grid[x][1], &grid[x][2], &grid[x][3], &grid[x][4]);
  }

  //Row totals
  printf("Row totals: ");
  for(int x = 0; x < 5; x++){
    for(int y = 0; y < 5; y++){
      sum += grid[x][y];
    }
    printf("%d ", sum);
    sum = 0;
  }

  // Column totals
  printf("\nColumn totals: ");
  for(int y = 0; y < 5; y++){
    for(int x = 0; x < 5; x++){
      sum += grid[x][y];
    }
    printf("%d ", sum);
    sum = 0;
  }

  return 0;
}
