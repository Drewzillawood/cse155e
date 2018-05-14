//Daniel Rico
//October 9, 2015
//CSCE 155E
//Assignment #3, Part 2	

//This program will produce "Floyd's triangle, which is a right triangle composed of natural numbers.

#include<stdio.h> //preprocessing directive standard input output library

int floyds_triangle(int row); //function prototype

int main (){ //main function start

	int row; //integer variable datatype declaration

	printf("Hello, please enter an integer to correspond to the number of rows to be produced: ");

	scanf("%d", &row); //user input allocation to variable row

	if (row <0){ //if for check if user inputs negative for rows

	printf("Floyds Triangle cannot have negative rows.");	

	}

	else{ //else, continue with logic

	floyds_triangle(row); //function call

	return(0);

	}
}

int floyds_triangle(int row){ //function definition

	int i, j, n = 1; //integer variable datatype declaration

	for (i = 1; i <= row; i++){ //necessary for loop logic (outter)
	
		for (j = 1; j <= i; j++){ //nested for loop (inner)
		
		printf("%d ", n); 							                  n++;
		}		
		printf("\n");
	}

}

	


