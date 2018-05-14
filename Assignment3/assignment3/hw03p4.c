//Daniel Rico
//October 9, 2015
//CSCE 155E
//Assignment #3, Part 4

/*This program will calculate all the possible pairs of two prime numbers that add up to the given integer. */



#include<stdio.h> //preprocessing directive for standard input output library

int prime (int numb); //function prototype
int is_sum_of_two_primes (int value); //function prototype

/*************************************************************************/

int main ( ) { //main function start

	int numb; //integer variable declaration 

	printf("Hello, please enter a positive integer to be evaluated: ");
	
	scanf("%d", &numb); //user input allocation

	is_sum_of_two_primes (numb); //function call

	int i, c = 0;

	

	for (i = 0; i <= numb/2; i++){ //for loop to calculate and print

                        int temp;

                        temp = numb - i;

                        prime(temp); //function prime call
                        prime(i); //function prime call

                        if (prime(temp) && prime(i) == 1){ //if loop condition to print

                                printf("\n%d = %d + %d\n", numb, i, temp);

				c = c + 1;

                        }		
                }
	printf("\n"); //new line for better looking output

	if (c == 0){ //checks if the given input cannot be expressed with primes

		printf("%d cannot be expressed as a sum of two prime numbers.\n\n", numb);
		
	}
	return 0;

}

/*************************************************************************/

int prime (int numb){ //function prime definition

	int i, x, j, a, y = 0; //variable declaration

	if (numb == 1){ //if loop logic for check for value 1

		//printf("Value is NOT prime\n.");
	
		return (1);
	}

	else { //else continue logic
	
	for (i = 2; i < numb; i++){ //for loop to iterate through numb for primes
 
	x = numb % i; //modulus to get primes

		if (x == 0){

			y = y + 1;
		}
		
		else {

		j = 1;

		}
	}

	if (y == 0){

		//printf("Value IS prime\n");
		return (1);
        }

        else{

                //printf("Value is NOT prime\n.");
		return (0);
        }

	}
}

int is_sum_of_two_primes (int value){ //function definition

		int i;

		for (i = 0; i <= value/2; i++){ //for loop to check if both temp and i are prime from value or numb
	
			int temp;

			temp = value - i;

			prime(temp); //function call
			prime(i); //function call

			if (prime(temp) && prime(i) == 1){ //check for primes

				return (1);			

			}

			else if (prime(temp) && prime(i) == 0){ //checks for non primes

				return (0);
			}
		}

}

