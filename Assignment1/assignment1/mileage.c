//Daniel Rico
//CSCE 155E
//September 3, 2015
//Assignment #1, Part 5

/* This program will receive user inputs for 3 categories of tax deductable miles driven and return the 2012 tax deduction*/

#include<stdio.h> /*Preprocessing directive for library (standard input-output) */

int main ( ){

	double B_miles, M_miles, C_miles, T_deduction; /*declare doubles*/

	printf("Hello, I am a Mileage Deduction Calculator (MDC).\n\nPlease enter your total business miles driven in 2012: "); /*print output*/
	scanf("%lf", &B_miles); /*allocation from user input to B_miles*/

	printf("\nPlease enter your total medical or moving miles driven in 2012: "); /*print output*/
	scanf("%lf", &M_miles); /*allocation from user input to M_miles*/

	printf("\nPlease enter your total charitable miles driven in 2012: "); /*print output*/
	scanf("%lf", &C_miles);	/*allocation from user input to C_miles*/

        if (B_miles < 0){ /*if statement to alarm invalid mile entry*/

                printf("Warning, an invalid mileage value has been entered (Negative value). Please fix your mistake and try agian."); /*print output*/
	
	}

	else if (M_miles < 0){	/*if statement to alarm invalid mile entry*/
		
		printf("Warning, an invalid mileage value has been entered (Negative value). Please fix your mistake and try agian."); /*print output*/
	
	}

	else if (C_miles < 0){ /*if statement to alarm invalid mile entry*/

		printf("Warning, an invalid mileage value has been entered (Negative value). Please fix your mistake and try agian."); /*print output*/
	
	}			
	
	else{	/*else statement for program to continue as directed*/

	T_deduction = (B_miles * 0.555) + (M_miles * 0.23) + (C_miles * 0.14); /*math formula to calculate total tax deduction for miles driven*/

	printf("\nYour total tax deduction for 2012 is: $%.2lf\n\nHave a great day!\n\n", T_deduction); /*print output*/

	}
	return(0);
}
