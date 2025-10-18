/*=====================================================================================================================/
Toncey Stevenson
Program 3P - Generating Fibonacci sequence, Prime numbers, and Collatz transformations
/=====================================================================================================================*/

#include "prime.h"

int is_prime(int n) {
	int result = 1; //Assume prime

	if (n <= 1){return 0;} //1 is not prime
	if (n % 2 == 0){result = 0;} //Even numbers
	if (n == 2) {result = 1;} //But 2 is prime
	int i = 3; //First odd prime number
	while (i < n) {
		if (n % i == 0) {result = 0;} //Any clean divisor of a number less than n is not prime
		i += 2; //Skip next even number
		}

	return(result);
}