//Example to dynamic multidimensional array 

#include<stdio.h>
#include<stdlib.h>

int ** createIdentityMatrix(int n);
void scalarMultiply(int x, int **matrix, int size);
void transpose(int **matrix, int size);
int ** product(int **A, int **B, int n);
double ** convertMatrix(int **M, int n, int m);

int main (){

	int rows = 2;

	int columns = 3;

	int **identity;

	identity = (int**)malloc(rows*sizeof(int*));

	int i;

	for (i = 0; i < rows; i++){

		identity[i] = (int*)malloc(columns*sizeof(int));

	}

	identity[0][0] = 1;
	identity[0][1] = 2;
	identity[0][2] = 3;

	identity[1][0] = 4;
	identity[1][1] = 5;
	identity[1][2] = 6;

	int j, k;

	for (j = 0; j < rows; j++){

		for (k = 0; k < columns; k++){

		printf("%d ", identity[j][k]);

		}

	printf("\n");

	}
}





