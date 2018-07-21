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

/* Fills the digits array with empty spaces
*/
void clearDigitsArray(void){
  for(int i = 0; i < 4; i++){
    for(int n = 0; n < MAX_DIGITS * 4; n++){
      digits[i][n] = ' ';
    }
  }
}

/* Fills in the digits array number by number. Position is the index of the
 * entered, starting with zero
 */

void processDigit(int digit, int position){
  if(segments[digit][0] == 1){
    digits[0][1 + (position * 4)] = '_';
  }
  if(segments[digit][1] == 1){
    digits[1][2 + (position * 4)] = '|';
  }
  if(segments[digit][2] == 1){
    digits[2][2 + (position * 4)] = '|';
  }
  if(segments[digit][3] == 1){
    digits[2][1 + (position * 4)] = '_';
  }
  if(segments[digit][4] == 1){
    digits[2][position * 4] = '|';
  }
  if(segments[digit][5] == 1){
    digits[1][position * 4] = '|';
  }
  if(segments[digit][6] == 1){
    digits[1][1 + (position * 4)] = '_';
  }
}

/* Simply prints digits array
*/
void printDigitsArray(void){
  for(int i = 0; i < 4; i++){
    for(int n = 0; n < 4 * MAX_DIGITS; n++){
      printf("%c", digits[i][n]);
    }
    printf("\n");
  }
}

int main(void){
  clearDigitsArray();

  //user input
  char ch;
  // Tracks characters entered
  int i = 0;
  printf("Enter a number: ");

  while(ch != '\n' && i < MAX_DIGITS){
    ch = getchar();
    if(ch >= 48 && ch <= 57){
      processDigit(ch - 48, i);
      i++;
    }
  }
  printDigitsArray();
  return 0;
}
