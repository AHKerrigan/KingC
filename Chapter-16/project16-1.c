/* Write a program that asks the user to enter an internatoinal dialing
 * code then looks it up in the country_codes array.
 */
#include <stdio.h>

int main(void){
    struct dialing_code{
        char *country;
        int code;
    };
    int entry;
    int i;

    // I'm not gonna type out all of them
    const struct dialing_code country_codes[] = 
    {{"Argentina",          54}, {"Bangaldesh",         880},
     {"Brazil",             55}, {"Burma",               95},
     {"China",              86}, {"Colombia",            57},
     {"Congo, Dem. Rep. of",243}, {"Egypt",              20},
     {"Ethopia",           251}, {"France",              33},
     {"Germany",            49}, {"India",               91}};

    printf("Enter a country code");
    scanf("%d", &entry);
    for(i = 0; i < 12; i++){
        if(country_codes[i].code == entry){
            printf("The country you entered was %s\n", country_codes[i].country);
            break;
        }
    }
    if(i == 12){
        printf("Error, Country not found");
    }
}