/* Write a program that simulates a game of craps

The player rolls two dice
If the sum of dice is 7 or 11, the player wins. The player loses if the sum is
2, 3, or 12. Otherwise the game continues*/

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

// Simulates a dice roll
int diceRoll(){
  int roll = (rand() % 6) + 1;
  return roll;
}

// Simulates Craps. Returns true if a win, false if a loss.
bool craps(){
  srand((unsigned) time(NULL));
  int dice1, dice2;
  int point;

  dice1 = diceRoll();
  dice2 = diceRoll();
  printf("You rolled a %d\n", dice1 + dice2);

  switch(dice1 + dice2){
    case 7: case 11:
      printf("You win!\n");
      return true;
      break;
    case 2: case 3: case 12:
      printf("You lose!\n");
      return false;
      break;
    default:
      point = dice1 + dice2;
      printf("The point is %d\n", point);
  }
  do{
    dice1 = diceRoll();
    dice2 = diceRoll();
    printf("You rolled a %d\n", dice1 + dice2);
    if(dice1 + dice2 == 7){
      printf("You lose!\n");
      return false;
    }
  }while(dice1 + dice2 != point);

  printf("You win!\n");
  return true;

}

int main(void){
  // Controls if the game will continue
  char cont = 'Y';
  int wins = 0;
  int losses = 0;

  do{

    if(craps()){
      wins++;
    }
    else{
      losses++;
    }
    printf("\nDo you want to continue playing?\n");
    scanf("%c", &cont);

    // Ensures we can continue to play despite pesky input buffer
    if(cont == '\n'){
      scanf("%c", &cont);
    }
  }while(toupper(cont) == 'Y');


  printf("Wins: %d Losses: %d", wins, losses);
  return 0;
}
