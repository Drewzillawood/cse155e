#include<stdio.h>
#include<stdlib.h>

void scalarMultiply(int x, int **matrix, int size);

int main (){

	int x, size;

	printf("\nHello, please enter the scalling factor: ");
        scanf("%d", &x);

	printf("\nHello, please enter the size of the matrix: ");
        scanf("%d", &size);

	int **matrix;

        matrix = (int**)malloc(size*sizeof(int*));

        int i;

        for (i = 0; i < size; i++){

                matrix[i] = (int*)malloc(size*sizeof(int));
        }

	int a, b;

        for (a = 0; a < size; a++){

                for (b = 0; b < size; b++){

                printf("\nPlease enter matrix M element position [%d][%d] value: ", a, b);

                scanf("%d", &matrix[a][b]);

                }
        }

	printf("\n");

	scalarMultiply(x, matrix, size);

}

//////////////////////////////////////////////////////////////////////

void scalarMultiply(int x, int **matrix, int size){

	int i, j;

        for (i = 0; i < size; i++){

                for (j = 0; j < size; j++){

                matrix[i][j] = matrix[i][j] *x;

                }

        }

        int y, z;

        for (y = 0; y < size; y++){

                for (z = 0; z < size; z++){

                printf("%d ", matrix[y][z]);

                }
        printf("\n");

        }
	printf("\n");
}




	
