/*=====================================================================================================================/
Toncey Stevenson
Lab 6L
/=====================================================================================================================*/
#include <stdio.h>

int main(void) {
    float initial_height;
    float coefficeint;

    printf("Enter coefficient of restitution: ");
    scanf("%f", &coefficeint);
    while (coefficeint <= 0.0 || coefficeint >= 1.0) { printf("Error: restitution coefficient out of range!\n");
        printf("Enter coefficient of restitution: ");
        scanf("%f", &coefficeint);
    }

    printf("Enter initial height in meters: ");
    scanf("%f", &initial_height);

    int bounces = 0;
    double distance = 0;
    float height = initial_height * coefficeint;

    distance += initial_height;

    while (height >= 0.10) {
        distance += 2 * height;
        bounces++;
        height *= coefficeint;
    }

    bounces++;
    distance += 2 * height;

    printf("Number of bounces: %d\n", bounces);
    printf("Meters traveled: %.2f", distance);

    return 0;
}