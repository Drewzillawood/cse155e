#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int numberOfTokens(char *str, char d);

int main (){

	char *a = (char *) malloc(sizeof(char)*100);

        printf("Please enter the string to be tokenized: ");

        fgets(a, 100, stdin);

	char c;

	printf("Please enter the delimiter: ");

	scanf(" %c", &c);

	numberOfTokens(a, c);

	return 0;
}

int numberOfTokens(char *str, char d){

	int count = 1;

	int len;

	len = strlen(str);

	int i;

	for (i = 0; i < len; i++){

		if (str[i] == d){

			count++;

		}

	}

	printf("\nThe number of tokens is: %d\n\n", count);

	return count;	
}
