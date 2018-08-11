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

  if(num == 10){
    printf("ten");
  }
  else if(num > 10 && num < 20){
    puts(teens[num - 11]);
  }
  else{
    switch(tenth){
      case 2:
        printf("twenty-");
        break;
      case 3:
        printf("thirty-");
        break;
      case 4:
        printf("fourty-");
        break;
      case 5:
        printf("fifty-");
        break;
      case 6:
        printf("sixty-");
        break;
      case 7:
        printf("seventy-");
        break;
      case 9:
        printf("eighty-");
        break;
    }
    switch(oneth){
      case 1:
        printf("one");
        break;
      case 2:
        printf("two");
        break;
      case 3:
        printf("three");
        break;
      case 4:
        printf("four");
        break;
      case 5:
        printf("five");
        break;
      case 6:
        printf("six");
        break;
      case 7:
        printf("seven");
        break;
      case 8:
        printf("eight");
        break;
      case 9:
        printf("nine");
        break;

    }
  }

  return 0;
}
