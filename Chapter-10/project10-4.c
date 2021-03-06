/* Program that classifies a poker hand

MODS
10-2: Move num_in_rank and num_in_suits into main

10-3: Remove the arrays and replace them with a single 5x2 array

10-4: Add support for a royal flush*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
bool straight, flush, four, three, royalFlush;
int pairs; /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(int hand[5][2]);
void analyze_hand(int hand[5][2]);
void print_result(void);
bool dupCard(int hand[5][2], char suit, char rank, int cards_read);
void selection_sort(int a[], int n);

/******************************************************************************
*main: Calls read_cards, analyze_hand, and print_result repeatedly.           *
******************************************************************************/
int main(void){
  int hand[5][2];
  for(;;){
    read_cards(hand);
    analyze_hand(hand);
    print_result();
  }
}

bool dupCard(int hand[5][2], char suit, char rank,  int cards_read){
  for(int i = 0; i <= cards_read; i++){
    if(hand[i][0] == rank && hand[i][1] == suit){
      return true;
    }
  }
  return false;
}

/* read_cards: Reads the cards into the external variable num_in_rank and
*               num_in_suit ; checks for bad cards and duplicate cards
*/
void read_cards(int hand[5][2]){
  char ch, rank_ch, suit_ch;
  int rank, suit;
  bool bad_card;
  int cards_read = 0;

  for(int i = 0; i < 5; i++){
    for(int n = 0; n < 2; n++){
      hand[i][n] = 0;
    }
  }

  while(cards_read < NUM_CARDS){
    bad_card = false;

    printf("Enter a card: ");

    rank_ch = getchar();
    switch(rank_ch){
      case '0':           exit(EXIT_SUCCESS);
      case '2':           rank = 0; break;
      case '3':           rank = 1; break;
      case '4':           rank = 2; break;
      case '5':           rank = 3; break;
      case '6':           rank = 4; break;
      case '7':           rank = 5; break;
      case '8':           rank = 6; break;
      case '9':           rank = 7; break;
      case 't': case 'T': rank = 8; break;
      case 'j': case 'J': rank = 9; break;
      case 'q': case 'Q': rank = 10; break;
      case 'k': case 'K': rank = 11; break;
      case 'a': case 'A': rank  =12; break;
      default:             bad_card = true;
    }

    suit_ch = getchar();
    switch(suit_ch){
      case 'c': case 'C': suit = 0; break;
      case 'd': case 'D': suit = 1; break;
      case 'h': case 'H': suit = 2; break;
      case 's': case 'S': suit = 3; break;
      default:            bad_card = true;
    }

    while((ch = getchar()) != '\n'){
      if(ch != ' '){
        bad_card = true;
      }
    }
    if(bad_card){
      printf("Bad card; ignored.\n");
    }
    else if(dupCard(hand, suit, rank, cards_read)){
      printf("Duplicate card; ignored.\n");
    }
    else{
      hand[cards_read][0] = rank;
      hand[cards_read][1] = suit;
      cards_read++;
    }
  }
}

/* analyze_hand: Determines whether the hand contains a straight, a flush,
*                four-of-a-kind, and/or three-of-a-kind; determines the number
*                of pairs; stores the results into the external variables
*                flush, four, three, and pairs
*/
void analyze_hand(int hand[5][2]){
  int num_consec = 0;
  int rank;
  straight = false;
  flush = true;
  four = false;
  three = false;
  pairs = 0;

  /* checks for flush */
  for(int i = 0; i < NUM_CARDS; i++){
    if(hand[i][1] != hand[0][1]){
      flush = false;
      break;
    }
  }

  /* check for straight
  * Given 5 consecutive integers, the sum will always be the lowest*5+10
  * This solution allows us to use the new array while staying at O(n)
  */
  int min = hand[0][0];
  int sum = 0;
  for(int i = 0; i < 5; i++){
    sum += hand[i][0];
    if(hand[i][0] < min){
      min = hand[i][0];
    }
  }
  straight = (min * 5) + 10 == sum;
  // We can utilize sum to check for royal flush
  royalFlush = flush && sum == 50;

  /* check for 4-of-a-kind, 3-of-a-kind, and pairs
   * The original algoithm was much better, but the book required us to not use
   * the same data structure to check for pairs, so we just sort them in a
   * different array then run a similar check for pairs
   */

  int matchList[NUM_CARDS];
  for(int i = 0; i < NUM_CARDS; i++){
    matchList[i] = hand[i][0];
  }
  selection_sort(matchList, NUM_CARDS);

  int match = 0, temp = matchList[0];
  for(int i = 0; i < NUM_CARDS; i++){
    if(matchList[i] == temp){
      match++;
    }
    if(matchList[i] != temp || i == NUM_CARDS - 1){
      switch(match){
        case(2): pairs++; break;
        case(3): three = true; break;
        case(4): four = true; break;
      }
      match = 1;
      temp = matchList[i];
    }
  }
}

/* print_result: Prints the classificaiton of the hand, based on the values of
*                the external variables straight, flush, four, three, and pairs
*/
void print_result(void){
  if(royalFlush){
    printf("Royal Flush");
  }
  else if(straight && flush){
    printf("Straight flush");
  }
  else if(four){
    printf("Four of a kind");
  }
  else if(three && pairs == 1){
    printf("Full house");
  }
  else if(flush){
    printf("Flush");
  }
  else if(straight){
    printf("Straight");
  }
  else if(three){
    printf("Three of a kind");
  }
  else if(pairs == 2){
    printf("Two pairs");
  }
  else if(pairs == 1){
    printf("Pair");
  }
  else{
    printf("High card");
  }

  printf("\n\n");
}

// Given an array and an n, sorts the first n elements of the array
void selection_sort(int a[], int n){


  if(n != 1){
    int high = a[0], highIndex = 0;
    int temp = 0;
    for(int i = 1; i < n; i++){
      if(a[i] > high){
        high = a[i];
        highIndex = i;
      }
    }
    for(int i = highIndex; i <= n - 2; i++){
      a[i] = a[i + 1];
    }
    a[n-1] = high;
    selection_sort(a, n - 1);
  }
  else{
    return;
  }
}
