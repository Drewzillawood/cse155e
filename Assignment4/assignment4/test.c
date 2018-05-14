#include<stdio.h>

int main(){

	int myArray[2][3];

	myArray[0][0] = 1;
	myArray[0][1] = 2;
	myArray[0][2] = 3;

	myArray[1][0] = 4;
	myArray[1][1] = 5;
	myArray[1][2] = 6;

	int i, j;

	for (i = 0; i < 2; i++){

		for (j = 0; j < 3; j++){

			printf("%d ", myArray[i][j]);
		
		}
	
		printf("\n");
		
	}

	return 0;

}
