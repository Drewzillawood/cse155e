//Daniel Rico
//CSCE 155E
//Assignment 2, Part 4
//September 18, 2015

/*This program will take input from user and outputs the binary equivalent in reverse order */ 

#include<stdio.h> /*preproccessing directive standard input-output library*/
#include<math.h> /*preproccessing directive mathematical library*/

int main (void){

	int n, b, i, x, m; /*int data type variable declaration*/

	printf("Hello, I can help you convert decimal to binary!\n");

		printf("\nPlease enter a number to be converted to binary: ");
	        scanf("%d", &n);

		m = n; /*neccessary equivalent variables for final print(s)*/

		if (n == 0){ /*if else loop to check for the case n =0*/

			printf("\n0 is the binary expansion of %d in reverse order.\n", m);

		}

		else{ /*else statement that contains decimal to binary conversion*/

		for (i = 0; n > 0; i++){ /*for loop to determine binary*/

			b = n % 2; /*division of two is a good technique looking for remainder*/

			n = n / 2; /*updating n by divison of 2 (if not, n remains origional value*/

			if (b == 0){ /*if conditonal for 0 binary*/

				printf("0");		
			}		

			if (b != 0){ /*if conditional for 1 binary*/

				printf("1");

			}
		}
		

		printf(" is the binary expansion of %d in reverse order.\n", m);	
	}
		return (0);
	}
