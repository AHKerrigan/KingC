/* modify UPC.c to check whether a ucp is valid */

#include <stdio.h>

int main(void){
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, firstSum, secondSum, total, checkDigit;

  printf("Enter the UPC code: \n");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &checkDigit);

  firstSum = d + i2 + i4 + j1 + j3 + j5;
  secondSum = i1 + i3 + i5 + j2 + j4;
  total = 3 * firstSum + secondSum;

  int trueCheckDigit = 9 - ((total -1 ) % 10);
  if(trueCheckDigit == checkDigit){
    printf("This is a valid UPC code");
  }
  else{
    printf("This UPC code is invalid");
  }

  return 0;
}
