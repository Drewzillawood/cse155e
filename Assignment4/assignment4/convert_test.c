#include<stdio.h>
#include<stdlib.h>

double ** convertMatrix(int **M, int n, int m);

	int main (){

	int n, m;

	printf("\nHello, please enter the dimension factor [Rows] (n): ");
        scanf("%d", &n);

        printf("\nPlease enter the dimension factor [Columns] (m): ");
        scanf("%d", &m);


	int **M;

        M = (int**)malloc(n*sizeof(int*));

        int i;

        for (i = 0; i < n; i++){

                M[i] = (int*)malloc(m*sizeof(int));
        }


	printf("\nMatrix M:\n");

        int a, b;

        for (a = 0; a < n; a++){

                for (b = 0; b < m; b++){

                printf("\nPlease enter matrix M element position [%d][%d] value: ", a, b);

                scanf("%d", &M[a][b]);

                }
        }

///////////////////////////////////////////////////////////////////////

convertMatrix(M, n, m);

        return 0;

}
/////////////////////////////////////////////////////////////////////////

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


