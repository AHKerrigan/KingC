/* Example program that prints a table of squares using a for statement*/

#include <stdio.h>

int main(void){
  int i, n;
  char c;

  printf("This program prints a table of squares\n");
  printf("Enter number of entries in table: ");
  scanf(" %d", &n);
  // Gets rid of the newline still in the input buffer
  getchar();

  for(i = 1, int puaseCount = 0; i <= n; i++, pauseCount++){
    if(pauseCount == 24){
      do{
        printf("Press Enter to Continue...");
        c = getchar();
      }while(c != '\n');
      pauseCount = 0;
    }
    printf("%10d%10d\n", i, i*i);

  }
  return 0;
}
