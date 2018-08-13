/* Write the following functions summing date structure contains three
 * members
 * 
 * int day_of_year(struct date d);
 * int compare_dates(struct date d1, struct date d2);
 */

#include <stdio.h>

typedef struct {
    int month;
    int day;
    int year;
} date;

// Takes a date as input and returns an int between 1 and 366
// corresponding to the dat of thre year
int day_of_year(date d){
    return (int)(d.month * 30.5) + d.day;
}

/* Returns -1 if d1 is an earlier date than d2, +1 if d1 is a later 
 * late date tahn d2, and 0 if d1 and d2 are the same
 */
int compare_dates(date d1, date d2){
    if(d1.year < d2.year){
        return -1;
    }
    if(d1.year > d2.year){
        return 1;
    }
    else{
        if(d1.month < d2.month){
            return -1;
        }
        if(d1.month > d2.month){
            return 1;
        }
        else {
            if(d1.day < d2.day){
                return -1;
            }
            if(d1.day > d2.day){
                return 1;
            }
            else{
                return 0;
            }
        }
    }
}

int main(void){
    date d1 = {11, 28, 1994};
    date d2 = {11, 23, 1994};
    printf("Day of year: %d\nWhich came First?: %d", day_of_year(d1), 
    compare_dates(d1, d2));
}