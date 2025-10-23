/*=====================================================================================================================/
Toncey Stevenson
Lab 8L
/=====================================================================================================================*/
#include <stdio.h>

int gcd(int number1, int number2) {
	int result = 1;
	for (int i = 1; i <= number1; i++) {
		/* Compute the GCD of the two numbers here using a 'for' loop */
		if (number1 % i == 0 && number2 % i == 0) {
			/* Store the GCD in the variable result and return it */
			result = i;
		}
	}
    return(result);
}

int lcm(int number1, int number2) {
	int result = 0;
	/* Compute the LCM of the two numbers here using any kind of logic you wish */
	int gcd1 = gcd(number1, number2);
	/* Store the LCM in the variable result and return it */
	result = ((number1 * number2) / gcd1);
    return(result);
}
