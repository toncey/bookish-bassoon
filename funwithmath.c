/*=====================================================================================================================/
Toncey Stevenson
Program 3P - Generating Fibonacci sequence, Prime numbers, and Collatz transformations
/=====================================================================================================================*/
#include <stdio.h>
#include "prime.h"

int is_prime(int n);


int main(void)
{
    int num, input = 0;

    while (1) {
        printf("\nPlease enter a number between 1 and 1000:");
        if ((input = scanf("%d", &num)) == 1 &&  num  >=  1 && num < 1000){
            printf("You entered: %d\n", num);

            //Fibonacci Sequence
            printf("Terms upto %d in the Fibonacci sequence:\n", num);
            int term = 0;
            int previous_term = 0;
            int next_term = 0;
            int count = 0;
            while ((term + previous_term) <= num) { //until the term in the series is not greater than the number entered
                if (term == 0) {
                    term = term +1;
                    printf("%d\t", term), ++count;
                    previous_term = term;
                    printf("%d\t", previous_term), ++count;
                }
                else {
                    next_term = term + previous_term;
                    previous_term = term;
                    term = next_term;
                    printf("%d\t", term), ++count;
                    if (count % 10 == 0){printf("\n");} //Print only 10 numbers on one line
                }

            }
            printf("\nTotal Fibonacci numbers: %d\n", count); //Also print the total number of terms in the sequence.

            //Prime numbers
            printf("\nList of Prime Numbers between 1 and %d:\n", num);
            int n = 1;
            int count_prime = 0;
            while (n <= num) {
                if (is_prime(n) == 1) {
                    printf("%d\t", n), ++count_prime;
                    if (count_prime % 10 == 0){printf("\n");}
                }
                ++n;
            }
            printf("\nTotal Prime numbers: %d\n", count_prime);

            //Collatz Conjecture
            int fn = num;
            printf("\n%d", fn);
            int count_collatz = 0;
            while (fn > 1) {
                if (fn % 2 == 0) {
                    fn = fn / 2;
                    printf("->%d", fn), ++count_collatz;
                }
                else {
                    fn = (fn * 3) + 1;
                    printf("->%d", fn), ++count_collatz;
                }
            }
            printf("\nTotal Collatz transformations: %d\n", count_collatz);

        }
        else {
            if (num < 1|| num >= 1000) {
                if (num == 1000) {
                    printf("You entered: %d\nGoodbye!", num);
                    return 0;
                }
                printf ("Invalid number: %d \nTry again!", num);
            }

        }
    }
}