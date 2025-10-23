/*-------------------------------------------------------------------------------/
Toncey Stevenson
Lab 5L
/*------------------------------------------------------------------------------*/
#include <stdio.h>

int main(void) {
    char continueChoice = 'y';
    while(continueChoice == 'y' || continueChoice == 'Y') {
        float a = 0, b = 0;

        printf("Light Color (1 for Blue, 2 for Red):    ");
        scanf(" %f  ", &a);
        printf("Light Steadiness (1 for Steady, 2 for Flashing):    ");
        scanf(" %f", &b);

        if (a == 1 && b == 1) {
            printf("Steady Blue, Clear View\n");
        }
        if (a == 1 && b == 2) {
            printf("Flashing Blue, Clouds Due\n");
        }
        if (a == 2 && b == 1) {
            printf("Steady Red, Storms Ahead\n");
        }
        if (a == 2 && b == 2) {
            printf("Flashing Red, Snow Instead\n");
        }

        printf("Continue (y/n): ");
        scanf("\n%c", &continueChoice);
    }
    if (continueChoice != 'y' || continueChoice != 'Y') {
        printf("Goodbye!");
    }


    return 0;
}