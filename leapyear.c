/*=====================================================================================================================/
Toncey Stevenson
Program 2P
/=====================================================================================================================*/

#include <stdio.h>

int main(void) {
    int year, input = 0;

    printf("Please enter a value for Year between -9999 and 9999\n");
    while ((input = scanf("%d", &year)) == 1 &&  year  >=  -9999 && year <= 9999){
        if (year < -9999 || year >= 9999) break;
        if (year < -46 || year > 5000) {
            printf ("Year %d: Invalid\n", year);
        }
        else{
            if (year < 1753) {
                if (year % 4 == 0) {
                    printf("Year %d: Julian Leap Year\n", year);
                }
                else {
                    printf("Year %d: Julian Non Leap Year\n", year);
                }
            }
            if (year >= 1753) {
                if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
                    printf("Year %d: Gregorian Leap Year\n", year);
                }
                else {
                    printf("Year %d: Gregorian Non Leap Year\n", year);
                }

            }
        }
    }
    return 0;
}