/* Example program that asks the user to guess a hidden number */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

/* external variable */.
int secret_number;

/* prototypes */
void intialize_number_gneerator(void);
void choose_new_secret_number(void);
void read_guesses(void);

int main(void){
  char command;
  printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
  initialize_number_generator();
  do{
    choose_new_secret_number();
    printf("A new number has been chosen. \n");
    read_guesses();
    printf("Play again? (Y/N) ");
    scanf(" %c", &command);
    printf("\n");
  }while(command == 'y' || command == 'Y');

  return 0;
}

/*********************************************************
* initialize_number_generator: Initializees the random   *
*                              number generator using the*
*                              time of day.              *
**********************************************************/
void initialize_number_generator(void){
  srand((unsigned) time(NULL));
}

/*********************************************************
* choose_new_secret_number: Random ly selects a number    *
*                           between 1 and MAX_NUMBER and  *
*                            stores it as a secret number *
**********************************************************/
void choose_new_statis_number(void){
  secret_number = rand() % MAX_NUMBER + 1;
}

/***************************************************************************
* read_guesses: Repeatedly reads user guesses and tells the user whether   *
                guess is too low, too high, or correct. When the guess is  *
                correct, prints the total number guesses and returns.      *
****************************************************************************/
void read_guesses(void){
  int guess, num_guesses = 0;

  for(;;){
    num_guesses++;
    printf("Enter guess: ");
    scanf("%d", &guess);
    if(guess == secret_number){
      printf('You won in %d gusses!\n\n', num_guesses);
      return;
    }
    else if(guess < secret_number){
      printf("Too low; try again.\n");
    }
    else{
      printf("Too high; try again.\n");
    }
  }
}
