//FUNCTION DEFINITIONS

#include<stdio.h> //preprocessing directive standard input output library
#include<stdlib.h> //preprocessing directive standard library
#include<math.h> //preprocessing directive mathmatics library
#include<string.h> //preprocessing directive for strings library

void removeChar(char *str, char c){ //removeChar function definition

	int len;

        len = strlen(str); //strlen function from string.h to find int length of string

        char *str1 = (char *) malloc(sizeof(char) *len); //dynamic memory declaration for character array (string)

        int i;
        int j = 0;

        for (i = 0; i < len; i++){

                if (str[i] == c){ //search each element of string against char c (if found, do nothing)

		//this allows us to "replace" and "move up" by skipping action if equal

                }

                else if (str[i] != c){ //if element character is not equal to the char c, then strings equal

                        str1[j] = str[i];

                        j++; 

                }

        }
	
	int k;

	for (k = 0; k < len; k++){

	str[k] = str1[k];

	str[len] = '\0';	

	}	

}


void replaceChar(char *src, char oldChar, char newChar){ //replaceChar function definition

	int len;

        len = strlen(src); //gets the int value for number of elements or length of string

        int i;

        for (i = 0; i < len; i++){ 

                if (src[i] == oldChar){ //is the string position i == the old char

                src[i] = newChar; //the string position i == new char

                }
        }
}


int strContains(const char *str, const char *subStr){ //strContains function definition

	char* check = strstr(str, subStr); //strstr is a function in string.h library that checks if a sub string is present in a string

    	if(check){ //if true ( = 1)

        return 1; //Found the sub string

	} 
	
	else{

        return 0; //Could not find the sub string

    	}

}
       
char **lengthSplit(const char *s, int n){ //function definition lengthSplit

	int len;
        int rows;
        int columns = n;

        len = strlen(s); //function from string.h allows us to get the number of elements or length of string

        if (len % n == 0){ //if there is no remainder from division

                rows = len/n;
        }

        else if(len % n != 0){

                rows = (len/n)+1; //allows us to add another row if there is a remainder of the division
        }

        char **split = (char**)malloc(sizeof(char*)*rows); //declaration of a dynamic 2 dimensional array (heap)

        int i;

        for (i = 0; i < rows; i++){

                split[i] = (char*)malloc(sizeof(char)*columns); //getting memory allocated for columns as well (heap)

        }

	int x;

        int y = 0;

        int value = n;

        int check = 0;

        int a,b;

        for (a = 0; a < rows; a++){ //nested for loop for rows and columns iteration

                for (b = 0; b < columns; b++){

                        if (s[check] == '\0'){ //checks for array terminating value '\0'

                                split[a][b] = s[check]; //dynamic 2d array = string at certain element check 
                        }

                        else{

                        split[a][b] = s[check];

                        check++;

                        }

                }

        }	
	
	return split; //returns the two dimensional array

}

char * flipCase(const char *src){ //function definition for flipCase

	int i;
        int len;

        len = strlen(src); //length of src from strlen from string.h

	char *flip = (char *) malloc(sizeof(char)*len); //declaration of dynamic memory allocation for flip char array

        for (i = 0; i < len; i++){ //for loop to iterate every element of src string

        flip[i] = src[i]; //simply makes copy of scr to flip for updating

        }

        int j;

        for (j = 0; j < len; j++){ //for loop to iterate every element of flip

                if (isupper(flip[j])){ //check for upper case at each position of flip by the function isupper()

                        flip[j] = tolower(flip[j]); //if it is upper, use the function tolower to make it lower case
                }

                else if (islower(flip[j])){ //check for lower case at each position of flip by the function islower

                        flip[j] = toupper(flip[j]); //if it is lower, use the function toupper to make it upper case
                }

		else{


		}
        }

        return flip; //return flip char array
}


int numberOfTokens(char *str, char d){ //numberOfTokens function definition

	int count = 1; //KEY, initial count = 1, not 0

        int len;

        len = strlen(str); //gets number of elements in str or length of str

        int i;

        for (i = 0; i < len; i++){

                if (str[i] == d){ //if any element of the array is equal to char d, which will be the deliminator character

                        count++; //iterate count +1

			/*if d is a true deliminator then we know there will be tokens on either side, therefore, 
			there will always be + 1 tokens to our deliminators!*/
			
                }

		else{
		
			//do nothing

		}
        }
	
	return count; //return int which is count value
}


