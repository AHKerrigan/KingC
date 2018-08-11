/* Write a program that accepts a date form the user in the form
 * mm/dd/yyy and then displays in the form month dd, yyyy, where
 * month in hte smae of the month
 */

#include <stdio.h>

int main(void){
    int date, month, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &date, &year);

    char *months[] = {"January", "Febuary", "March", "April", "May",
                      "June", "July", "August", "September", "October",
                      "November", "December"};
    printf("You entered the date %s %d, %d", months[month - 1], date, year);
    return 0;
}