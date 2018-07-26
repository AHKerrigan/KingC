/* Fix the averaging function in 11-3 */

#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum){
  int i;

  *sum = 0.0;
  for(i = 0; i < n; i++){
    *sum += a[i];
  }
  *avg = *sum / (double)n;
}

int main(void){
  double list[5] = {1, 2, 3, 4, 5};
  int index = 5;
  double avg = 0;
  double sum = 0;

  avg_sum(list, index, &avg, &sum);

  printf("Sum = %lf\nAverage = %lf", sum, avg);
  return 0;
}
