#include<stdio.h>
#include<stdlib.h>

void transpose(int **matrix, int size);

int main (){

	int size;

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

	transpose(matrix, size);
}

void transpose(int **matrix, int size){

	
	int j, k;

        for (j = 0; j < size; j++){

                for(k = 0; k < j; k++){

                int temp = matrix[j][k];

                matrix[j][k] = matrix[k][j];

                matrix[k][j] = temp;

                }

        }

        int y, z;

        for (y = 0; y < size; y++){

                for (z = 0; z < size; z++){

                printf("%d ", matrix[y][z]);

                }
        printf("\n");

        }

}











