//Daniel Rico
//September 1, 2015
//CSCE 155E
//Assignment #1, Part 3

/* This is a program that allows for users to input 3 resistor values to be calculated in series and then in parallel */

#include<stdio.h> /*preprocessing directive for standard input output library*/
#include<math.h> /*preprocessing directive for mathematical functions like pow*/

int main(){

	double R1, R2, R3, Rs, Rp;  /*double declarations*/

	printf("Hello,\nPlease enter your resistor values (in Ohms) R1, R2, and R3 seperated by a space between each value: "); /*print output*/
	scanf("%lf %lf %lf",&R1, &R2, &R3);  /*allocation of user input to R1, R2, R3*/

	Rs = (R1+R2+R3);  /*mathematical formula to calculate series resistance*/

	Rp = pow(((1/R1)+(1/R2)+(1/R3)),(-1));  /*mathematical formula to calculate parallel resistance*/

	if (Rs <= 0){  /*if statement to determine invalid series resistance*/

	printf("Wrong input, resistance cannot be less than or equal to 0.");/*print output*/
	
	}

	else if (Rp <= 0){  /*if statment to determine invalid parallel resistance*/

	printf("Wrong input, resistance cannot be less than or equal to 0."); /*print output*/
	
	}

	else{    /*else statment for program to continue as directed*/

	printf("\nThank you\n\nYour equivalent resistance (in series) = %.3lf (ohms)\n\nYour equivalent resistance (in parallel) = %.3lf (ohms)\n", Rs, Rp); /*print output*/

	return(0);
}
}
