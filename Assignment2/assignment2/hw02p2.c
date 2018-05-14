//Daniel Rico
//CSCE 155E 
//Assignment #2, Part 2
//September 18, 2015

/*This code will take input of Temperature (in C) and determine (+ or - 5%) to which element would have that boiling point. */

#include<stdio.h> /*preproccessing directive standard input-output library*/


int main (void){

	double T; /*variable double type declaration*/

	printf("\nHello, I can help determine a substance from a boiling point!\n");

		printf("\nPlease enter a temperature in celsius: ");
        	scanf("%lf", &T);		

		if (T >= -169.785 && T <= -153.615){ /*if else if loop for ALL conditional data provided (+ or - 5%)*/

			printf("\nThe temperature %.2f C is approximately the boiling point of Methane.\n\n", T);
		}

		else if (T >= -0.525 && T <= -0.475){
	
			printf("\nThe temperature %.2f C is approximately the boiling point of Butane.\n\n", T);
		}

		else if (T >= 95 && T <= 105){

			printf("\nThe temperature %.2f C is approximately the boiling point of Water.\n\n", T);
		}

		else if (T >= 143.26 && T <= 158.34){

			 printf("\nThe temperature %.2f C is approximately the boiling point of Nonane.\n\n", T);
		}

		else if (T >= 339.15 && T <= 374.85){

			printf("\nThe temperature %.2f C is approximately the boiling point of Mercury.\n\n", T);
		}

		else if (T >= 1127.65 && T <= 1246.35){

                        printf("\nThe temperature %.2f C is approximately the boiling point of Copper.\n\n", T);
                }

		else if (T >= 2083.35 && T <= 2302.65){

                        printf("\nThe temperature %.2f C is approximately the boiling point of Silver.\n\n", T);
                }

		else if (T >= 2527 && T <= 2793){

                        printf("\nThe temperature %.2f C is approximately the boiling point of Gold.\n\n", T);
                }
		
		else{

			printf("\nThe temperature %.2f C is the boiling point of an unknown substance.\n\n", T);
		} 
return (0);

}




