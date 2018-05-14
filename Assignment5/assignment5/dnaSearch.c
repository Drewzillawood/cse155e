#include<stdio.h> //preprocessing directive standard input output
#include<stdlib.h> //preprocessing directive standard library
#include<string.h> //preprocessing directive string library

int main (int argc, char *argv[]) { //main function with syntax for arguments from command line

        FILE *inp = NULL; //File pointer initialization to NULL

        char *inputFileDNA = argv[1]; //pointer to argument 1 (input file) from the command line

        char *sequence = argv[2]; //pointer to argument 2 (sub string) from the command line

	inp = fopen(inputFileDNA, "r"); //fopen function will open inputFileDNA for "r" reading
	
	char *DNA = (char*)malloc(sizeof(char)*200); //declare dynamic char array (string) in heap

	int found = 0; //counter declared

	int i;

	while (fgets(DNA, 200, inp) != NULL){ //fgets function will get line by line (including white spaces) 
						//data from inp and put in DNA until = NULL
		
	for (i = 0; i < strlen(DNA)-strlen(sequence); i++){ //for loop that will iterate until elements DNA minus elements of sequence 
		
		if ((strncmp(&DNA[i], sequence, strlen(sequence))) == 0){ //string comparitor function strncmp will return 0 if strings equal

			found++; //since strings equal (= 0) then increment found
	
		}

		else{

			//do nothing!

		}

	}
	
	}

	fclose(inp); //close inp file

	printf("\n%s appears %d times.\n\n", sequence, found );	//demonstrate output count from found with respect to sequence (sub string) argument

	return 0;

}
