//Daniel Rico
//CSCE 155E
//September 23, 2015
//Assignment #2, Part 1

//This code will approximate pi via user input for a series calculation

#include<stdio.h> /*preproccessing directive for standard input-output library*/
#include<math.h> /*preproccessing directive for mathematical library*/

int main (void){

	double n, pi, sum; /*variable double type declaration*/

	int i; /*variable int type declaration*/

	printf("\nHello, I can help approximate pi via a series!\n\n");

	printf("Please enter a value of n: ");
	scanf("%lf", &n);

	for (i = 1; i <=n; i++){ /*for loop to iterate the series based on input*/

	pi = (1.0)/((2.0*i)-1.0); /*math equation to determine value*/

	if (i % 2 == 0){ /*if else loop to produce the positive negative series notation*/

		sum = sum - pi; /*even values of i are negative*/
	}

	else{

		sum = sum + pi; /*odd values of i are positive*/
	}

	}

	sum = sum * 4.0; /*final calculation*/

	printf("\nThe approximation of pi is: %.6f\n\n", sum);

	return (0);
}

