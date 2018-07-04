/* Write a program that reads a 5x5 array of integers and then prints the row
sums and the column sums

MOD: 8-8: Modify the program so that it prompts for five quiz grades for each
of the five students, then computes the total score and avreage score for each
student and the average score, high score, and low score for each quiz*/

#include <stdio.h>

int main(void){
  int grid[5][5];
  int sum = 0;
  int average = 0;

  // Inputting the grid
  for(int x = 0; x < 5; x++){
    printf("Enter grades for student %d: ", x+1);
    scanf("%d %d %d %d %d", &grid[x][0], &grid[x][1], &grid[x][2], &grid[x][3], &grid[x][4]);
  }

  //Row totals
  printf("Student total/average: \n");
  for(int x = 0; x < 5; x++){
    for(int y = 0; y < 5; y++){
      sum += grid[x][y];
    }
    printf("%d: %d/%d \n", x, sum, sum/5);
    sum = 0;
  }

  // Column totals
  printf("\nQuiz total/average: \n");
  for(int y = 0; y < 5; y++){
    for(int x = 0; x < 5; x++){
      sum += grid[x][y];
    }
    printf("%d: %d/%d \n", y, sum, sum/5);
    sum = 0;
  }

  return 0;
}
