//Daniel Rico
//CSCE 155E
//September 3, 2015
//Assignment #1, Part 5

/* This program will receive user input for air temperature in fahrenheit to calculate the speed of sound at that specific temperature. */

#include<stdio.h> /*preprocessing directive for standard input output library*/
#include<math.h> /*preprocessing directive for mathematical library*/

int main ( ){

	double T, v; /*double declarations*/

	printf("Hello,\n\nI am a program that can calcualte the speed of sound at a given temperature! \n"); /*print output*/

	printf("\nPlease enter the air temperature in Fahrenheit: "); /*print output*/
	scanf("%lf", &T); /*allocation from user input to T*/

	v = 1086*sqrt((((5*T)+297))/(247)); /*math formula for speed of sound at T*/

	printf("\nThe speed of sound at %.0lf degrees Fahrenheit is %.3lf feet-per-second.\n\nThank you and have a great day!\n", T, v); /*print output*/

	return (0);

}

