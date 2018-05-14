#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void removeChar(char *str, char c);

int main (){

	char *a = (char *) malloc(sizeof(char) *100);

	char b;

	printf("Please enter a string of characters: ");

	fgets(a, 100, stdin);

	printf("What character would you like to remove?: ");

	scanf(" %c", &b);

	removeChar(a, b);

	return 0;

}

void removeChar(char *str, char c){

	int len;
	
	len = strlen(str);

	char *str1 = (char *) malloc(sizeof(char) *len);

	int i;
	int j = 0;

	for (i = 0; i < len; i++){

		if (str[i] == c){

		}
	
		else if (str[i] != c){

			str1[j] = str[i];		

			j++;

		}

	}	

	int k;

        for (k = 0; k < len; k++){

        str[k] = str1[k];

	str[len] = '\0';

        }

	printf("\n%s", str);

	printf("\n");

	free(str1);
}
