#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void replaceChar(char *src, char oldChar, char newChar);

int main (){


	char *a = (char *) malloc(sizeof(char) *100);
        char old;
	char new;

        printf("Please enter a string of characters: ");

        fgets(a, 100, stdin);

        printf("What is the old character?: ");

        scanf(" %c", &old);

	printf("What is the new character?: ");

	scanf(" %c", &new);

        replaceChar(a, old, new);

	return 0;

}

void replaceChar(char *src, char oldChar, char newChar){

	int len;

        len = strlen(src);
	
	int i;

	for (i = 0; i < len; i++){

		if (src[i] == oldChar){

		src[i] = newChar;

		}

	}

	printf("%s", src);

}




