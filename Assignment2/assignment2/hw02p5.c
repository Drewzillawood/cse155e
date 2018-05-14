//Daniel Rico
//CSCE 155E
//September 19, 2015
//Assignment 2, Part 5
 
/*This program will create a table containing a customized loan amortization table. */

#include<stdio.h> /*preproccessing directive standard input-output library*/
#include<math.h> /*preproccessing directive mathematical library*/
#include<string.h> /*preproccessing directive string library*/

int main (void){

	double P, i, n, m, j; /*double data type variable declaration*/

	double payment, F_payment, interest, principal, balance; /*double data type variable declaration*/

	printf("\n\nHello, I'm a program that will create a customized loan amortization table!\n\n");

	printf("Please enter the Principal: ");
	scanf("%lf", &P);

	printf("\nPlease enter the Annual Interest Rate: ");
	scanf("%lf", &i);

	printf("\nPlease enter the Term in month: ");
	scanf("%lf", &n);

	m = n; /*equivalence needed for the for loop and interest*/

	i = (((1.0/12.0)*i)/(100.0)); /*interest calculation*/

	payment = (i*P)/(1-(pow((1+i),(-n)))); /*payment calculation*/

	printf("\nMonthly Payment: %.2f ", payment);

	printf("\n___________________________________________\n");

	char* string = "Payment  Interest  Principal  Balance"; /*table title string*/
	printf("\n%s\n\n", string);

	for (j = 1; j<=n; j++){ /*for loop to itterate all of user entered months*/

		interest = (1-(pow((1+i),(-m))))*(payment); /*interest per month calculation*/
				m--; /*decrease by 1 each loop itteration*/
			
		principal = payment - interest; /*principal per month calculation*/

		P = (P - principal); /*updating P which is principal (total due)*/

		balance = P; /*each itteration with P decreasing due to payments*/

		interest = (int)(interest*100)/100.00; /*rouding to cent value*/

		principal = (int)(principal*100)/100.00; /*rouding to cent value*/

		balance = (int)(balance*100)/100.00; /*rounding to cent value*/

		printf("%.0f         $%.2f     $%.2f    $%.2f", j, interest, principal, balance);

		printf("\n");
	
	}  //end of for loop

	F_payment = interest + principal; /*final payment calculation*/

	printf("\nFinal Payment: %.2f \n\n", F_payment);

	return (0);

}
