#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char **lengthSplit(const char *s, int n);

int main (){

        char *a = (char *) malloc(sizeof(char)*100);

        int m;

        printf("Please enter the string to be divided: ");

        fgets(a, 100, stdin);

        printf("Please enter the dividing int value: ");

        scanf("%d", &m);

        lengthSplit(a, m);

        return 0;
}

char **lengthSplit(const char *s, int n){

	int len;
	int rows;
        int columns = n;

        len = strlen(s);

	rows = len/n;


        if (len % n == 0){

		rows = len/n;
	}

	else if(len % n != 0){

		rows = (len/n)+1;	
	} 

	char **split = (char**)malloc(sizeof(char*)*rows);

	int i;

	for (i = 0; i <= rows; i++){

		split[i] = (char*)malloc(sizeof(char)*columns);

	}

////////////////////////////////////

	int x;

	int y = 0;

	int value = n;

	int check = 0;

	int a,b;

	for (a = 0; a < rows; a++){

		for (b = 0; b < columns; b++){

			if (s[check] == '\0'){

				split[a][b] = s[check];	

			}

			else{

			split[a][b] = s[check];
		
			check++;

			}
		
		}

	}

	int j;

	for (j = 0; j < rows; j++){

		printf("This is output: %s\n", split[j]);
	}
	
	return split;

}
