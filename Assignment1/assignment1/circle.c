//Daniel Rico
//September 2, 2015
//CSCE 155E
//Assignment #1, Part 4

/* This program will determine (based on user x and y input) whether the location on the xy coordinate plane is inside, on, or outside a circle of radius 2. */

#include<stdio.h> /*Preprocessing directive for library (standard input-output) */
#include<math.h> /*Preprocessing directive for a mathematical library for sqrt() capabilities*/

int main (){

	double x, y, p; /*declaring doubles*/

	printf("Hello, I am a program that will determine your coordinate postion in the xy plane!\n\n"); /*print output*/

	printf("Please enter your x and y position values in feet (which are on the xy plane) seperated by a single space: "); /*Print output*/ 
	scanf("%lf %lf", &x, &y); /*Allocating user input to x and y variables*/

	p = sqrt((x*x)+(y*y)); /*mathematical formula to calculate distance*/

	if (p < 2){ /*if statement for identifying location inside circle*/

		printf("\nYour position (%.1lf, %.1lf) is inside a circle of radius 2ft in the xy plane.\n", x,y); /*print output for inside circle*/

	}

	if (p == 2){ /*if statement for identifying location on cirlce*/

		printf("\nYour position (%.1lf, %.1lf) is on a circle of radus 2ft in the xy plane.\n", x,y); /*print output for on circle*/

	}

	if (p > 2){ /*if statement for identifying location outside circle*/

		printf("\nYour position (%.1lf, %.1lf) is outside a circle of radis 2ft in the xy plane.\n", x,y); /*print output for outside circle*/

	}

	else{ 

		return(0);
	}
}
