#include<stdio.h> //preprocessing directive standard input output library
#include<stdlib.h> //preprocessing directive standard library
#include<string.h> //preprocessing directive strings library

int main (int argc, char *argv[]) { //instead of the usual void, this is syntax for command line arguments to the main function

        FILE *inp = NULL; //File pointer set to NULL for proper initialization 
        FILE *outp = NULL; //File pointer set to NULL for proper initializiation
	
	char *inputFileName = argv[1]; //character command line input INPUT file name
        char *outputFileName = argv[2]; //character command line input OUTPUT file name

        inp = fopen(inputFileName, "r"); //fopen is function that opens INPUT file and "r" is for reading file
        outp = fopen(outputFileName, "w"); //fopen is function that opens OUTPUT file and "w" is for writing to the output file 

	char *a = (char *) malloc(sizeof(char)*100); //declare and allocate memory for a dynamic character array (a) 100 is arbitrary

	int i,j;

	char bb = '&'; //character to be scrubbed
	char cc = '<'; //character to be scrubbed
	char dd = '>'; //character to be scrubbed
	char ee = '"'; //character to be scrubbed

	char *b = "&amp;"; //string to replace with
	char *c = "&lt;"; //string to replace with 
	char *d = "&gt;"; //string to replace with
	char *e = "&quot;"; //string to replace with

	while (fgets(a, 100, inp) != NULL){ //while loop the fgets function that gets each line (dispite white spaces) from inp (input file) until = NULL (end of doc)

		for (i = 0; i < strlen(a); i++){ //iterates through each line via string length of each line

                        if (a[i] == bb){ //if string element == character to be scrubbed

				fputs(b, outp); //fputs replaces with string b in output file
                        }
			
			else if (a[i] == cc){ //if string element == character to be scrubbed

				fputs(c, outp); //fputs replaces with string c in output file
			}
		
			else if (a[i] == dd){ //if string element == character to be scrubbed

				fputs(d, outp); //fputs replaces with string d in output file
			}

			else if (a[i] == ee){ //if string element == character to be scrubbed

				fputs(e, outp); //fputs replaces with string e in output file
			}

			else {

				fprintf(outp, "%c", a[i]); //else, use fprintf function to print characters at string element that is
								//to be scrubbed to seemlessly create output file

			}

		}
 
        }

	fclose(inp); //close input file
        fclose(outp); //close output file

        return 0;
}
