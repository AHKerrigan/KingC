/* Write a program that breaks down ISBN information inputted by the user*/

#include <stdio.h>

int main(void) {
  int gs1, group, publish, item, check;
  printf("Enter ISBN number: \n");
  scanf("%d-%d-%d-%d-%d", &gs1, &group, &publish, &item, &check);
  printf("GS1 prefix: %d\n", gs1);
  printf("Group identifier: %d\n", group);
  printf("Publisher code: %d\n", publish);
  printf("Item number: %d\n", item);
  printf("Check digit: %d\n", check);
  return 0;
}
