#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * flipCase(const char *src);

int main () {

	char *a = (char *) malloc(sizeof(char)*100);

	printf("Please enter the string to be case flipped: ");

        fgets(a, 100, stdin);	

	flipCase(a);

	return 0;

}

char * flipCase(const char *src){

	int i;
        int len;

        len = strlen(src);

	char *flip = (char *) malloc(sizeof(char)*len);

	for (i = 0; i < len; i++){

	flip[i] = src[i];

	}

	int j;

	for (j = 0; j < len; j++){

		if(isupper(flip[j])){ 
		
			flip[j] = tolower(flip[j]);
		}

		else if(islower(flip[j])){

			flip[j] = toupper(flip[j]);
		}

		else{

		}
	}

	return flip;
}
