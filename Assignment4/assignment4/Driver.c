//Driver file for testing Program 1 functions definitions and prototypes

#include<stdio.h>
#include<stdlib.h>

int sum(const int *a, int size);
int subSum(const int *a, int size, int i, int j);
int containsWithin(const int *a, int size, int x, int i, int j);
int isPermutation(const int *a, int size);
double * appendArrays(const double *a, const double *b, int sizeOfA, int sizeOfB);

int main(){

	int size, sizeOfA, sizeOfB;

	int i, j, x;

//	printf("\nHello, please enter the size of your desired array: ");

//	scanf("%d", &size);

	printf("\nHello, please enter the size of array A: ");
	scanf("%d", &sizeOfA);

	printf("\nPlease enter the size of array B: ");
	scanf("%d", &sizeOfB);

//	int *a = (int *) malloc(sizeof(int) * size);

	double *a = (double *) malloc(sizeof(double) * sizeOfA);

	double *b = (double *) malloc(sizeof(double) * sizeOfB);

//	sum(a, size); //GOOD

//	subSum(a, size, i, j); //GOOD

//	containsWithin(a, size, x, i, j); //GOOD

//	isPermutation(a, size); //GOOD

	appendArrays(a, b, sizeOfA, sizeOfB);

	free(a);
	free(b);

	return 0;

}

int sum(const int *a, int size){

        int i;

        for (i = 0; i <= size; i++){

                printf("\n\nPlease enter array int value for element position %d : ", i);

                scanf("%d", &a[i]);
        }

        int j;

        int sum = 0;

        for (j = 0; j <= size; j++){

                sum = sum + a[j];

        }

        printf("\nThe sum of your integer array is %d ", sum);

	printf("\n\n");

}

int subSum(const int *a, int size, int i, int j){

	int x;

	for (x = 0; x <= size; x++){

                printf("\n\nPlease enter array int value for element position %d : ", x);

                scanf("%d", &a[x]);
        }


	printf("\nHello, please enter the first indice: ");

	scanf("%d", &i);

	printf("\nHello, please enter the second indice: ");

	scanf("%d", &j);

	int k;
	int sum = 0;

	for (k = i; k <= j; k++){

		sum = sum + a[k];

	}	

	printf("\nThe sum of your array values between element %d and element %d is %d", i, j, sum);

	printf("\n\n");

}

int containsWithin(const int *a, int size, int x, int i, int j){

	int y;

        for (y = 0; y <= size; y++){

                printf("\n\nPlease enter array int value for element position %d : ", y);

                scanf("%d", &a[y]);
        }


        printf("\nPlease enter the first indice: ");

        scanf("%d", &i);

        printf("\nPlease enter the second indice: ");

        scanf("%d", &j);

        printf("\nPlease enter a value to determine if it is contained within the array: ");

        scanf("%d", &x);

        int k;
	int value;
        int contains = 0;

        for (k = i; k <= j; k++){

		value = a[k];

                if (value == x){

                        contains ++;

                }

                else {

                }
        }

        if (contains == 1){


	printf("\nThe value %d is contained between array element %d and %d.", x, i, j);

        }

        else {

                printf("\nThe value %d is not present between array element %d and %d.", x, i, j);

        }

        printf("\n\n");


}

int isPermutation(const int *a, int size){

	int y, c;

        for (y = 0; y <= size; y++){

                printf("\n\nPlease enter array int value for element position %d : ", y);

                scanf("%d", &a[y]);
        }

	int i, j;
	int no = 0;
		
		for (i = 0; i <= size; i++){

			if (a[i] == a[i+1]){
		
				no++;

			}	

			else{

			}	
	
		}

	if (no > 0){

		printf("\nThis array is not a permutation.\n");

	}

	else{

		printf("\nThis array is a permutation.\n");

	}
}

double * appendArrays(const double *a, const double *b, int sizeOfA, int sizeOfB){
	
	int i, j, k, l, m;

	for (i = 0; i <= sizeOfA; i++){

		printf("\n\nPlease enter array int value for element position %d in Array A:  ", i);

		scanf("%d", &a[i]);
	}

	for (j = 0; j <= sizeOfB; j++){

		printf("\n\nPlease enter array int value for element position %d in Array B: ", j);

                scanf("%d", &b[j]);
	}

	int size = 1;
	size = size + sizeOfA + sizeOfB;

	printf("\nSize is: %d\n", size);

	double *arr = (double *) malloc(sizeof(double) * size);

	for (k = 0; k <= sizeOfA; k++){

		arr[k] = a[k];
	}

	for (l = sizeOfA+1; l <= size; l++){

		arr[l] = b[l];
	}

	for (m = 0; m <= size; m++){

		printf("%d\n", arr[m]);
	}

	return arr;
}


