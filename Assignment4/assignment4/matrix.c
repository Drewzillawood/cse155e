//Daniel Rico
//October 25, 2015
//CSCE 155E
//Assignment 4

//Matricies Function Definitions

#include<stdio.h> //preprocessing directive standard input output
#include<stdlib.h> //preprocessing directive standard library

#include "matrix.h" //includeds matrix header file 

int ** createIdentityMatrix(int n){ //function definition

	///////////////////////////////

        int **identity;

        identity = (int**)malloc(n*sizeof(int*)); //dynamic declaration 2D array

	int i=0;

        for (i = 0; i < n; i++){

                identity[i] = (int*)malloc(n*sizeof(int)); 
        }

	///////////////////////////////

        int x, y;

        for (x = 0; x < n; x++){

                for (y = 0; y < n; y++){

                        if (x == y){

                                identity[x][y] = 1;
	
                        }

                        else{

        	                identity[x][y] = 0;

                        }
                }

        }

return identity; //KEY return

}

void scalarMultiply(int x, int **matrix, int size){ //function definition

	int i, j;

        for (i = 0; i < size; i++){

                for (j = 0; j < size; j++){

                matrix[i][j] = matrix[i][j] *x;

                }

        }
//NO return (void)
}

void transpose(int **matrix, int size){ //function definition

	int j, k;

        for (j = 0; j < size; j++){

                for(k = 0; k < j; k++){

                int temp = matrix[j][k];

                matrix[j][k] = matrix[k][j];

                matrix[k][j] = temp;

                }
        }
//NO return (void)
}

int ** product(int **A, int **B, int n){ //function definition

	////////////////////////////////////

	int **AB;

        AB = (int**)malloc(n*sizeof(int*)); //dynamic declaration 2D array

        int i;

        for (i = 0; i < n; i++){

                AB[i] = (int*)malloc(n*sizeof(int));

        ////////////////////////////////////

	}

        int a, b ,c;

        for (a = 0; a < n; a++){

                for (b = 0; b < n; b++){

                        for (c = 0; c < n; c++){

                                AB[a][b] += A[a][c] * B[c][b];

                        }
                }

        }

	return AB; //KEY return
}

double ** convertMatrix(int **M, int n, int m){ //function definition

	///////////////////////////

        double **dM;

        dM = (double**)malloc(n*sizeof(double*)); //dynamic declaration 2D array (double)

        int i;

        for (i = 0; i < n; i++){

                dM[i] = (double*)malloc(m*sizeof(double));
        }

        ////////////////////////////

        int a, b;

        for (a = 0; a < n; a++){

                for (b = 0; b < m; b++){

                 dM[a][b] = M[a][b];

                }
        }

	return dM; //KEY return
}

