/* Write a program that prompts the user for a number then displays the number,
using the characters to simulate the effect of a seven digit display */

#include <stdio.h>
#include <math.h>

#define MAX_DIGITS 10

// External arrays
char digits[4][MAX_DIGITS * 4];
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                              {0, 1, 1, 0, 0, 0, 0},
                              {1, 1, 0, 1, 1, 0, 1},
                              {1, 1, 1, 1, 0, 0, 1},
                              {0, 1, 1, 0, 0, 1, 1},
                              {1, 0, 1, 1, 0, 1, 1},
                              {1, 0, 1, 1, 1, 1, 1},
                              {1, 1, 1, 0, 0, 0, 0},
                              {1, 1, 1, 1, 1, 1, 1},
                              {1, 1, 1, 1, 0, 1, 1}};

void clearDigitsArray(void){
  for(int i = 0; i < 4; i++){
    for(int n = 0; n < MAX_DIGITS * 4; n++){
      digits[i][n] == ' ';
    }
  }
}

void processDigit(int digit, int position){
  if(segments[digit][0] == 1){
    digits[0][1 + (position * 4)] = '_';
  }
}

void printDigitsArray(void){

}

int main(void){
  printf(" _ \n");
  printf("| |\n");
  printf("|_|\n");
  return 0;
}
