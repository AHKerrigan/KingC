/* Write a program that prompts the user to enter a number n, then prints all
even squares between 1 and n. */

#include <stdio.h>

int main(void){
  int num;
  printf("Enter an integer:");
  scanf("%d", &num);
  if(num > 1){
    // 1 doesn't count, so starts as long as i is greater than 1
    // Since we only prints even, t ticks up by 2 each time, i is t squared
    // So we just print i until its greater than the numebr entered
    for(int i = 2, t = 2; i <= num; i = t*t, t += 2){
      printf("%d\n", i);
    }
  }
  return 0;
}
