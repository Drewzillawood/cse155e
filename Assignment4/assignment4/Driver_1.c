//Driver function

#include<stdio.h>
#include<stdlib.h>

int ** createIdentityMatrix(int n);
void scalarMultiply(int x, int **matrix, int size);
void transpose(int **matrix, int size);
int ** product(int **A, int **B, int n);
double ** convertMatrix(int **M, int n, int m);

int main (){

	int n, m;
	//int x;
	//int size;

	//printf("Hello, please enter the identity value (n): ");
	printf("\nHello, please enter the dimension factor [Rows] (n): ");
	scanf("%d", &n);

	printf("\nPlease enter the dimension factor [Columns] (m): ");
	scanf("%d", &m);

	//scanf("%d", &n);

	//printf("\nHello, please enter the scalling factor: ");
        //scanf("%d", &x);

        //printf("\nHello, please enter the size of the matrix: ");
	//scanf("%d", &size);

	//int m, n;

	////////////////////////////////

	int **M;

        M = (int**)malloc(n*sizeof(int*));

        int i;

        for (i = 0; i < n; i++){

                M[i] = (int*)malloc(m*sizeof(int));
        }

	////////////////////////////////

	/////////////////////////////////
/*
	int **matrix;

        matrix = (int**)malloc(size*sizeof(int*));

        int i;

        for (i = 0; i < size; i++){

                matrix[i] = (int*)malloc(size*sizeof(int));
        }
*/
	////////////////////////////////

	////////////////////////////////
/*
	int **A;

        A = (int**)malloc(n*sizeof(int*));

        int i;

        for (i = 0; i < n; i++){

                A[i] = (int*)malloc(n*sizeof(int));
        }
*/
	////////////////////////////////

	////////////////////////////////
/*
	int **B;

        B = (int**)malloc(n*sizeof(int*));

        int j;

        for (j = 0; j < n; j++){

                B[j] = (int*)malloc(n*sizeof(int));
        }
	
*/
	////////////////////////////////

//	printf("\nMatrix A:\n");

	printf("\nMatrix M:\n");

	int a, b;

        for (a = 0; a < n; a++){

                for (b = 0; b < m; b++){

                printf("\nPlease enter matrix M element position [%d][%d] value: ", a, b);

                scanf("%d", &M[a][b]);

                }
        }

/*
	int l, m;

	for (l = 0; l < n; l++){

		for (m = 0; m < n; m++){

		printf("\nPlease enter matrix A element position [%d][%d] value: ", l, m);

		scanf("%d", &A[l][m]);
	
		}
	}
*/

//	printf("\nMatrix B:\n");	

/*
	int o, p;

	for (o = 0; o < n; o++){

                for (p = 0; p < n; p++){

                printf("\nPlease enter matrix element position [%d][%d] value: ", o, p);

                scanf("%d", &B[o][p]);

                }

        }
*/

	//createIdentityMatrix(n); //GOOD!

	//scalarMultiply(x, matrix, size); //GOOD!

	//transpose(matrix, size); //GOOD!

	//product(A, B, n); //GOOD!

	convertMatrix(M, n, m);	

	return 0;

}

int ** createIdentityMatrix(int n){

	int rows = n;

	int cols = n;

	int **identity;

        identity = (int**)malloc(n*sizeof(int*));

        int i;

        for (i = 0; i < n; i++){

                identity[i] = (int*)malloc(n*sizeof(int));
        }
	
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
	
	int j, k;

        for (j = 0; j < n; j++){

                for (k = 0; k < n; k++){

                printf("%2d", identity[j][k]);

                }

        printf("\n");

        }
}

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

int ** product(int **A, int **B, int n){

	int **AB;

        AB = (int**)malloc(n*sizeof(int*));

        int i;

        for (i = 0; i < n; i++){

                AB[i] = (int*)malloc(n*sizeof(int));
        }

	int a, b ,c;

	for (a = 0; a < n; a++){

		for (b = 0; b < n; b++){

			for (c = 0; c < n; c++){

				AB[a][b] += A[a][c] * B[c][b];	
		
			}
		}

	}

	printf("\n");

	int d, e;

	for (d = 0; d < n; d++){

                for (e = 0; e < n; e++){

		printf("%d ", AB[d][e]);
		
		}

	printf("\n");

	}

	printf("\n");
}


double ** convertMatrix(int **M, int n, int m){


	///////////////////////

	double **dM;

        dM = (double**)malloc(n*sizeof(double*));

        int i;

        for (i = 0; i < n; i++){

                dM[i] = (double*)malloc(m*sizeof(double));
        }

	///////////////////////

	int a, b;

        for (a = 0; a < n; a++){

                for (b = 0; b < m; b++){
		
		M[a][b] = dM[a][b];	

		}
	}

	printf("\n");

        int c, d;

        for (c = 0; c < n; c++){

                for (d = 0; d < m; d++){

                printf("%d ", M[c][d]);

                }

        printf("\n");

        }

        printf("\n");
	
}



