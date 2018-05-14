//Daniel Rico
//CSCE 155E
//Assignment 2, Part 3
//September 18, 2015

/*This code will take inputs and (if it meets the switch case) it will output the month of the year it is related too. */

#include<stdio.h> /*preprocessing directive standard input-output library*/

int main (void){

	printf("\nHello, I can determine the month of the year from an integer!\n\n");

	int M; /*int data type variable declaration*/

		printf("Please enter an integer between 1 and 12: ");
		scanf("%d", &M);

		switch(M){ /*switch, case, break, default conditional for ALL 12 months = 12 cases, non 1 - 12 value entered, invalid via default*/

			case 1:

				printf("\nThe month is January.\n\n");
				break;

			case 2: 

				printf("\nThe month is February.\n\n");
				break;

			case 3:

				printf("\nThe month is March.\n\n");
                	        break;

			case 4: 

				printf("\nThe month is April.\n\n");
                	        break;

			case 5:

				printf("\nThe month is May.\n\n");
                	        break;

			case 6:

				printf("\nThe month is June.\n\n");
                	        break;

			case 7:

				printf("\nThe month is July.\n\n");
                	        break;

			case 8:

				printf("\nThe month is August.\n\n");
                	        break;

			case 9:

				printf("\nThe month is September.\n\n");
                	        break;

			case 10:

				printf("\nThe month is October.\n\n");
                	        break;

			case 11:

				printf("\nThe month is November.\n\n");
                	        break;

			case 12:	
	
				printf("\nThe month is December.\n\n");
                	        break;

			default:

				printf("\nInvalid Month. Please try again.\n\n");

			}


		return (0);

	}
