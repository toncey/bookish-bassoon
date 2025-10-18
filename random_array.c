/*=====================================================================================================================/
Toncey Stevenson
Lab 10L - Generating random array of numbers, followed by average
/=====================================================================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Declare a constant for array size
int n = 25;
int sum_control = 0;
double sum = 0;

int main() {
	printf("Array of Random Numbers:\n");
	int i, number;
	//Declare an integer array using the size constant defined above
	int array[n];
	/* initialize random seed */
	srand(time(NULL));

	// after a number is generated update the array with the new 
	// number. Replace 25 with the constant you defined above.
	for(i=0; i<n; i++) {
		/* Generate a random number */
		number = rand() % 100 + 1;
		//Update the array using an index
		//Since the loop control variable i starts
		//from zero you can use "i" as your index
		array[i] = number;
	}
	
	//use a FOR loop to print the array elements one per line
	for (i=0; i<n; i++) {
		printf("%d\n", array[i]);
	}
	
	//compute the average value of all array elements
	//You MUST use a WHILE loop to get the total sum of the 
	//individual array elements. Outside the loop
	while (sum_control < n){
		sum += array[sum_control];
		sum_control ++;
	}
	//divide the total by the number of elements in the array and
	double average = sum / n;
	//print your result
	printf("Average: %2.0f\n", average);
	return(0);
}
        
