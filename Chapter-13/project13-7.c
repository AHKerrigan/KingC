/* Write a program that asks the user for a two-digit number, then prints the
English world for the number 
 * MOD 13-7: Modify such that the program uses pointers to stirngs instead of 
 * switch*/

#include <stdio.h>

int main(void){
  int num, tenth, oneth;
  printf("Enter a two digit number: ");
  scanf("%d", &num);
  tenth = num/10;
  oneth = num % 10;
  printf("You entered the number ");
  char *teens[] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen",
                   "sixteen", "seventeen", "eighteen", "nineteen "};
  char *tens[]  = {"twenty", "thirty", "fourty", "fifty", "sixty",
                   "seventy", "eighty", "ninety"};
  char *ones[]  = {"", "one", "two", "three", "four", "five", "six",
                   "seven", "eight", "nine"}

  if(num == 10){
    printf("ten");
  }
  else if(num > 10 && num < 20){
    puts(teens[num - 11]);
  }
  else{
    puts(tens[tenth - 2]);
    puts(ones[oneth]);
  }

  return 0;
}
