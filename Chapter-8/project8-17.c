/* Print an nxn magic squre */

#include <stdio.h>

int main(void){
  int n;

  printf("Enter an odd n: ");
  scanf("%d", &n);

  int square[99][99] = {0};
  int x = n / 2;
  int y = 0;
  int tempX = x;
  int tempY = y;

  square[x][y] = 1;
  for(int i = 2; i <= n*n; i++){
    if(y - 1 < 0){
      tempY = n - 1;
    }
    else{
      tempY = y - 1;
    }
    if(x + 1 == n){
      tempX =  0;
    }
    else{
      tempX = x + 1;
    }

    if(square[tempX][tempY] != 0){
      if(y + 1 == n){
        y = 0;
      }
      else{
        y++;
      }
    }
    else{
      x = tempX;
      y = tempY;
    }
    square[x][y] = i;
  }

  for(int i = 0; i < n; i++){
    for(int t = 0; t < n; t++){
      printf("%3d ", square[t][i]);
    }
    printf("\n");
  }


  return 0;
}
