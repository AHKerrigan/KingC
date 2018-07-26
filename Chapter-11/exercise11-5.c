/* Write the following function:

void split_time(long total_sex, int *hr, int *min, int *sec);
*/

#include <stdio.h>
#include <time.h>

void split_time(long total_sec, int *hr, int *min, int *sec){
  *sec = total_sec % 60;
  total_sec /= 60;
  *min = total_sec % 60;
  total_sec /= 60;
  *hr = total_sec % 24;

}

int main(void){
  int hr, min, sec;
  time_t seconds;
  seconds = time(NULL);
  split_time(seconds, &hr, &min, &sec);

  printf("Hours: %d\nMin: %d\nSecs: %d", hr, min, sec);
  return 0;
}
