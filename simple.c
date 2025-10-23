/*=======================================================*/
/*Lab Assignment 1L */
//Toncey Stevenson
//Lab 01L
/* =======================================================*/

#include <stdio.h>

/*=======================================================*/
int main()
{
    float x = 0;
    float y = 0;
	float result = 0;

    /* Ask the user for x and y */
    printf("Please enter two numbers: ");
    scanf("\n%f%f", &x, &y);
	printf("Values are: %6.2f and %6.2f\n", x, y);

	result = x + y;
	printf("Add: %6.2f\n", result);

	result = x - y;
	printf("Subtract: %6.2f\n", result);

	result = x * y;
	printf("Multiply: %6.2f\n", result);

	result = x / y;
	printf("Division: %6.2f\n", result);

	result = (x * y) - (x + y);
	printf("Computation 1: %6.2f\n", result);

	result = (x * x * x) + (3 * x * x * y) + (3 * x * y * y) + (y * y * y);
	printf("Computation 2: %6.2f\n", result);





    return 0; // this should be the last statement in the program
}

