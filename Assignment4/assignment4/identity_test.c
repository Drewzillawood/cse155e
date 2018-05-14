#include<stdio.h>
#include<stdlib.h>

int ** createIdentityMatrix(int n);

int main (){

	int n;

	printf("Hello, please enter the identity value (n): ");

	scanf("%d", &n);

	createIdentityMatrix(n);

}
/////////////////////////////////////////////////////////////////////////////

int ** createIdentityMatrix(int n){

	/////////////////////////////////////

	int **identity;

        identity = (int**)malloc(n*sizeof(int*));

        int i;

        for (i = 0; i < n; i++){

                identity[i] = (int*)malloc(n*sizeof(int));
        }

        /////////////////////////////////////

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

