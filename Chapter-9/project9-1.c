/* Write a program that implements selection sort */

#include <stdio.h>

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

int main(void){
  int n;
  printf("Enter the size of the array : ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the array: ");
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  selection_sort(a, n);

  for(int i = 0; i < n; i++){
    printf("%d ", a[i]);
  }


  return 0;
}
