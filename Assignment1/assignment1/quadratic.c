//Daniel Ric
//September 1, 2015
//CSCE 155E
//Assignment #1, Part 2

/*This code will calculate the roots of a quadratic equation after askingfor inputs from the user for a, b and c. */

#include<stdio.h> /*preprocessing directive for standard input library*/
#include<math.h> /*preprocessing directive for mathematical library*/

int main ( ){

	double a, b, c, x1, x2; /*double declarations*/

	printf("Hello,\n\nI am a program that will calculate the roots of a quadratic equation.\n\n"); /*print output*/

	printf("Please enter values a, b, and c of your quadratic equation seperated by a single space between each value: "); /*print output*/
	scanf("%lf %lf %lf",&a, &b, &c); /*allocation from user to a, b, and c.*/

	if (a == 0){ /*if statement for invalid a entry*/
		
		printf("\na = 0 is an invalid input because the function will divide by 0, please try again. "); /*print output*/
	}
		
	else if ( ((4)*a*c) > (b*b) ){ /*if statement for invalid entry (complex roots)*/

		printf("\nThese values will produce a negative value under the square root, which is invalid (complex roots).\nPlease correct your math and try again. "); /*print output*/
	}

	else { /*else statemnt for program to continue as expected*/

	x1 =((-b+sqrt((b*b)-4*(a*c)))/(2*a)); /*quadratic fomula calculation (+root)*/

	x2 =((-b-sqrt((b*b)-4*(a*c)))/(2*a)); /*quadratic fomula calculation (-root)*/

	printf("\nYour two roots from the quadratic are: x1 =  %.2lf and x2 = %.2lf\n", x1, x2); /*print output*/

	}
	
	return (0);
}
