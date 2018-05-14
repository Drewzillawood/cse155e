#include<stdio.h>
#include<stdlib.h>

int ** product(int **A, int **B, int n);

int main (){

	int n;

	printf("\nHello, please enter the dimension factor (n): ");
        scanf("%d", &n);

	int **A;

        A = (int**)malloc(n*sizeof(int*));

        int i;

        for (i = 0; i < n; i++){

                A[i] = (int*)malloc(n*sizeof(int));
        }

	int l, m;

        for (l = 0; l < n; l++){

                for (m = 0; m < n; m++){

                printf("\nPlease enter matrix A element position [%d][%d] value: ", l, m);

                scanf("%d", &A[l][m]);

                }
        }
	
	int **B;

        B = (int**)malloc(n*sizeof(int*));

        int j;

        for (j = 0; j < n; j++){

                B[j] = (int*)malloc(n*sizeof(int));
        }

	int o, p;

        for (o = 0; o < n; o++){

                for (p = 0; p < n; p++){

                printf("\nPlease enter matrix element position [%d][%d] value: ", o, p);

                scanf("%d", &B[o][p]);

                }

        }


	product(A, B, n);

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

