/* Write a program that generates a random walk across a 10x10 array

MOD - 9-3: Modify the random walk program so that it uses a function
print_array() and generate_random_walk()*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void print_array(int grid[10][10]){

  // Prints the final grid
  for(int i = 0; i < 10; i++){
    for(int n = 0; n < 10; n++){
      printf("%c", grid[i][n]);
    }
    printf("\n");
  }

}

void generate_random_walk(int grid[10][10]){

  srand((unsigned) time(NULL));


// Generates the initial grid
  for(int i = 0; i < 10; i++){
    for(int t = 0; t < 10; t++){
      grid[i][t] = '.';
    }
  }

  // Markers tracking position. 0,0 is the top left corner
  int x = 0, y = 0;

  // Character that keeps track which move we are on
  char move = 'A';

  // Represents the current move. 0 for up, 1 for right, 2 for down, 3 for left
  // xMove and yMove are the actual modifiers to the grid location
  int currentMove = 0;
  int xMove = 0, yMove = 0;
  grid[x][y] = move;

  // The boolean that will check to see if our choce of move is valid
  bool validMove = false;

  // Ends once we increment past Z
  while(move != 'Z' + 1){
    validMove = false;
    while(!validMove){
      currentMove = rand() % 4;
      switch(currentMove){
        case 0:
          xMove = 0;
          yMove = -1;
          break;
        case 1:
          xMove = 1;
          yMove = 0;
          break;
        case 2:
          xMove = 0;
          yMove = 1;
          break;
        case 3:
          xMove = -1;
          yMove = 0;
          break;
      }
      if(x + xMove > -1 && x + xMove < 10 && y + yMove > -1 && y + yMove < 10 &&
          grid[x + xMove][y + yMove] == '.'){
        validMove = true;
      }
    }

    move++;
    x += xMove;
    y += yMove;
    grid[x][y] = move;

  }
}
int main(void){
  int grid[10][10];
  generate_random_walk(grid);


  print_array(grid);

  return 0;
}
