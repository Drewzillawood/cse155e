//Daniel Rico
//October 9, 2015
//CSCE 155E 
//Assignment #3, Part 4

//This program will determine what nCr, nPr, and factorial are when the user inputs the values of n and r. 

#include<stdio.h> //preprocessing directive standard input output library

double factorial(double n, double r); //function prototype

double find_nCr (double factorial);  //function prototype

double find_nPr (double factorial); //function prototype

int main ( ) { //main function start

	double n, r; //double variable datatype delcaration

	printf("Please enter the value of n and r: ");
	scanf("%lf %lf", &n, &r); //user input allocation to n and r variables

	if ( n <= 0 || r <= 0){ //check for invalid input

	printf("The values of n or r cannot be less or equal to 0.\n");
	
	}

	else if ( n < r ){ //check for invalid input

	printf("The value of n must be greater or equal to r.\n");

	}

	else { //continue with logic

//	factorial(n, r);

//	find_nCr(factorial(n, r));

	find_nPr(factorial(n, r)); //function call
	
	}

	return (0);
}

double factorial(double n, double r){ //function definition

	int i, j, k, x, y, z; //integer variable datatype declaration

	double numer, denom, rfact; //double variable datatype declaration

	int fact; //more integer variable datatype declaration

	double ncr, npr; //more double variable datatype declaration
	
	x = 1; //initial value
	y = 1; //initial value
	z = 1; //initial value

	if (fact = 1){ //if loop start to find nCr
	
		for ( i = 1; i <= n; i++){ //for loop for numer

		x = x * i;

		}

		numer = x; //numerator

			for (j = 1; j <= (n-r); j++){ //for loop for denom

			y = y * j;
			
			}
	
			denom = y; //denominator

				for (k = 1; k <= r; k++){ //for loop for rfact

				z = z * k;
				
				}
				
				rfact = z; //r portion of factorial in denom
	

				ncr = ((numer) / ((denom)*(rfact))); //ncr calc

				printf("\n\nThe value of %.0fC%.0f = %.0f ", n, r, ncr);

	}

	x = 1; //initial values
	y = 1; //initial values
	z = 1; //intiial values

	if (fact = 2){ //if loop start to find nPr

		for ( i = 1; i <= n; i++){ //for loop to find numer

                x = x * i;

                }

                numer = x; //numerator
		
			for (j = 1; j <= (n-r); j++){ //for loop to find denom

                        y = y * j;

                        }

                        denom = y; //denominator
		
				npr = (numer) / (denom); //npr calculation

				printf("\n\nThe value of %.0fP%.0f = %.0f\n\n ", n, r, npr);

	}

}

double find_nCr (double factorial){ //function definition

	int fact;	

	fact = 1;
	
	factorial;

}


double find_nPr (double factorial){ //function definition
	
	int fact;

	fact = 2;

	factorial;
}
