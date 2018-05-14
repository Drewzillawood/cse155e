//Daniel Rico
//October 9, 2015
//CSCE 155E
//Assignment #3, Part 5

//This program will compute back and forth between four energy scales (calories, joules, ergs, foot pounds force). 

#include<stdio.h> //preprocessing directives standard input output library
#include"energy.h" //linked file to header sections (modular)

void main ( ) { //main function start

	Scale scale;
	Error err;

	double cals, joules, ergs, ftlbf; //double variable declarations

	printf("\nHello, I can help you convert between calories, joules, ergs and ft-lbs-force.\n\n");

	printf("Enter a scale:\n\n1. Calorie\n\n2. Joule\n\n3. Erg\n\n4. Ft-Lb-F\n\n: ");

	scanf("%d", &scale); //user input allocation to scale


	if (scale == 1){ //if conditional for scale = 1

        printf("\nEnter the value of energy: ");
        scanf("%lf", &cals);
	
	int flag = convertEnergy (&cals, &joules, &ergs, &ftlbf, scale, err); /*function call*/

		if (flag == 0){ //if flag for no error

                        printf("No Error has occured.\n");

                }

                else if (flag == 5){ //if flag for negative energy error

                        printf("\nError has occured. Negative energy conversion! Please only enter positive energy values.\n");
                }

                else if (flag == 6){ //if flag for null pointer error

                        printf("\nError has occured. Null Error in memeory allocation.\n");

                }	

	}

	else if (scale == 2){ //if conditional for scale = 2

        printf("\nEnter the value of energy: ");
        scanf("%lf", &joules);

	int flag = convertEnergy (&cals, &joules, &ergs, &ftlbf, scale, err); /*function call */

		if (flag == 0){ //if flag for no error

                        printf("No Error has occured.\n");

                }

                else if (flag == 5){ //if flag for negative energy error

                        printf("\nError has occured. Negative energy conversion! Please only enter positive energy values.\n");
                }

                else if (flag == 6){ //if flag for null pointer error

                        printf("\nError has occured. Null Error in memeory allocation.\n");

                }

	}
	
	else if (scale == 3){ //if conditional for scale = 3

        printf("\nEnter the value of energy: ");
        scanf("%lf", &ergs);

	int flag = convertEnergy (&cals, &joules, &ergs, &ftlbf, scale, err); /*function call*/

		if (flag == 0){ //if flag for no error

                        printf("No Error has occured.\n");

                }

                else if (flag == 5){ //if flag for negative energy error

                        printf("\nError has occured. Negative energy conversion! Please only enter positive energy values.\n");
                }

                else if (flag == 6){ //if flag for null pointer error

                        printf("\nError has occured. Null Error in memeory allocation.\n");

                }

	}	

	else if (scale == 4){ //if conditional for scale = 4

        printf("\nEnter the value of energy: ");
        scanf("%lf", &ftlbf);

	int flag = convertEnergy (&cals, &joules, &ergs, &ftlbf, scale, err); /*function call*/

		if (flag == 0){ //if flag for no error

			printf("No Error has occured.\n");

		}
	
		else if (flag == 5){ //if flag for negative energy error

			printf("\nError has occured. Negative energy conversion! Please only enter positive energy values.\n");	
		}	

		else if (flag == 6){ //if flag for null pointer error

			printf("\nError has occured. Null Error in memeory allocation.\n");

		}
	
	}	

	else if (scale != 1 || scale != 2 || scale != 3 || scale != 4){ /*if conditional for error in scale option from user*/

	printf("\nInvalid Scale! Please enter values 1 through 4 only.\n");

	}

}

