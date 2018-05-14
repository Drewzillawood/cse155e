//Daniel Rico
//October 9, 2015
//CSCE 155E 
//Assignment #3, Part 1

/*This program will take user input for an integer value and reverse the order and print it out.
*/

#include<stdio.h> //preprocessing directive for the standard input output library

int main (void){ //main function

	int value = 0; //integer declaration
	int x, flip, i;	//integer declaration

	printf("Hello, please enter any integer and I will reverse that integer: ");
	scanf("%d", &value); /*taking user input and allocating it to the variable value*/

//	value = i;

	if (value != 0){ //if loop to check for 0 value

		while(value != 0){ //while loop necessary for logic

			x = value % 10; //modulus application 

			flip = flip *10 + x;

			value = value / 10; //value being updated for each iteration

				}


		printf("\nThe reversed integer is %d\n\n", flip); //output
	}

	else{
	
		printf("\nThe reverse integer is 0\n"); //output if zero entry
	}
	return (0);
}

