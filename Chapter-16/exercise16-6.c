/* Write the following function, assuming that the time structure 
 * contains three members: hours, minutes, seconds
 * struct time split_time(long total_seconds);
 *
 * total seconds is a time represented as numbers since midnight
 */

#include <stdio.h>

struct time{
    int hours;
    int minutes;
    int seconds;
};
 
 struct time split_time(long total_seconds){
    struct time t;

    t.hours = total_seconds / 3600;
    t.minutes = (total_seconds - (total_seconds / 3600)) / 60;
    t.seconds = total_seconds % 60;
    return t;
 }

int main(void){
    struct time t = split_time(344739);
    printf("Hours: %d\nMinutes: %d\nSeconds:%d\n", t.hours, t.minutes, t.seconds);
    return 0;

}