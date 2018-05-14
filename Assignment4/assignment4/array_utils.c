//Daniel Rico
//October 25, 2015
//CSCE 155E
//Assignment 4

//Array Function definitions

#include<stdio.h> //preprocessing directive standard input output
#include<stdlib.h> //preprocessing directive standard library

#include "array_utils.h" //header file included

int sum(const int *a, int size){ //sum function definition 

	int j;

	int sum = 0;

	for (j = 0; j <= size; j++){ //for loop through *a array to size

		sum = sum + a[j];  //summation of arrays values

	}

	return sum; //KEY return

}

int subSum(const int *a, int size, int i, int j){ //subSum function definition

        int k;
        int sum = 0;

        for (k = i; k < j; k++){ //for loop from indicie i until but not including j

                sum = sum + a[k]; //summation of array between i and j indicies

        }

	return sum; //KEY return

}

int containsWithin(const int *a, int size, int x, int i, int j){ //containsWithin function definition

        int k;
	int value;

        for (k = i; k < j; k++){ //for loop iterating between i and j

		value = a[k]; //variable that continas array values

        	if (value == x){ //if value of array at position between indicies exists

			return 1; //KEY return
		}

		else {

		}
    	}

	return 0; //KEY return 
}

	

int isPermutation(const int *a, int size){ //isPermutation function definition

        int i, j, k;
        int no = 0;

                for (i = 0; i < size; i++){              //nested for loop 
			for (k = 0; k < size; k++){
                        
				if (a[i] == a[k] && i != k && containsWithin(a, size, i, 0, size-1) == 0){ //containsWithin function call

                                return 1; //KEY return

                        	}
			}
                 }

	return 0; //KEY return

}

double * appendArrays(const double *a, const double *b, int sizeOfA, int sizeOfB){ //appendArrays function definition

	int k, l, m;

	int size = 1;

        size = size + sizeOfA + sizeOfB; //summation of all sizes allows for final iteration large enough

        double *arr = (double *) malloc(sizeof(double) * size); //dynamically declared 1D array

	        for (k = 0; k < sizeOfA; k++){ //for loop of A array and appended to array

        	        arr[k] = a[k]; //arr array equals a array
        	}

		int j=0;

        	for (l = sizeOfA; l <= size; l++){ //for loop of B array and append to arr

                	arr[l] = b[j];

			j++;
       		}

        	return arr; //KEY array
	}

