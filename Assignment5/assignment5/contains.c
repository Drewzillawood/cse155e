#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strContains(const char *str, const char *subStr);

int main (){

	char *a = (char *) malloc(sizeof(char) *100);

	char *b = (char *) malloc(sizeof(char) *100);

	printf("Enter main string: ");

	fgets(a, 100, stdin);

	printf("Enter search for string: ");

	fgets(b, 100, stdin);

	strContains(a, b);

	return 0;
}

int strContains(const char *str, const char *subStr){

	char* check = strstr(str, subStr);

        if(check){

        return 1; //Found the sub string

        }

        else{

        return 0; //Could not find the sub string

        }
}

/*	int len;
	int len2;
	
        len = strlen(str);
	len2 = strlen(subStr);

	printf("The strlen str: %d\n", len);

	printf("The strlen subStr: %d\n", len2);

	int i;
	int j;

	int count = 0;

	for (i = 0; i < len; i++){
	
		for (j = 0; j < len2; j++){

			if (str[i] == subStr[j]){

			count++;

			}
		}	

	}

	printf("Count = %d\n", count);

	if (count >= len2){

		printf("\nPresent\n");

		return 1;
	}

	else {

		printf("\nNope\n");

		return 0;

	}
}
*/
