//Daniel Rico
//September 1, 2015
//CSCE 155E
//Assignment #1, Part 1


/*This code allows user input of annual interest and outputs annual percentage yeild (APY).*/


#include <stdio.h> /*Preprocessing directive for library (standard input-output) */
#include <math.h> /*Preprocessing directive for a mathematical library for exp() capabilities*/

int main ( ){

	double i, apy; /*declaring doubles*/

	printf("Hello,\n\nI am a program that can calculate annual percentage yeild.\n"); /*print output*/
	
	printf("\nPlease enter your nominal interest rate: "); /*print output*/
	scanf("%lf", &i); /*receive input from user and attribute it to variable */
	
	apy = exp(i)-1; /*math equation to determine apy*/

	printf("\nThank you,\n\nYour (APY) is: %.4lf\n", apy);	/*print output applying apy result*/


	return(0);
}
