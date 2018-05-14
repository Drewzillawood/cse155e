#include<stdio.h> //preprocessing directive for standard input output
#include"energy.h" //link to header file

int convertEnergy (double *cals, double *joules, double *ergs, double *ftlbf, Scale scale, Error err){ //function definition
 
int error; //integer declaration

if (scale == 1){ //if conditional for calculations for user inputed cals

        *joules = (*cals)*(4.184); //joules calculation

        *ergs = (*cals)*(41840000); //ergs calculation

        *ftlbf = (*joules) / (1.3558); //ftlbf calculation

        if (*cals < 0 || *joules < 0 || *ergs < 0 || *ftlbf < 0){ /* checks for negative energy */

                error = NEG_EN_ERROR;

        }

        else{ //if energy positive, continue with logic

        printf("\nCalories = %f\nJoules = %f\nErgs = %f\nFt-lb-force = %f\n\n", *cals, *joules, *ergs, *ftlbf);

                error = NO_ERROR;

        }

}

else if (scale == 2){ //if conditional for calculations for user inputed joules

        *cals = (*joules) / (4.184); //cals calculation

        *ergs = (*cals)*(41840000); //ergs calculation 

        *ftlbf = (*joules) / (1.3558); //ftlbf calculation

        if (*cals < 0 || *joules < 0 || *ergs < 0 || *ftlbf < 0){ /* checks for negative energy */

                error = NEG_EN_ERROR;

        }

        else{ //if energy positive, continue with logic

        printf("\nCalories = %f\nJoules = %f\nErgs = %f\nFt-lb-force = %f\n\n", *cals, *joules, *ergs, *ftlbf);

                error = NO_ERROR;

        }

}

else if (scale == 3){ //if conditional for calculations for user inputed ergs

        *cals = (*ergs) / (41868000); //cals calculation

        *joules = (*cals)*(4.184); //joules calculation

        *ftlbf = (*cals)*(1.3558); //ftlbf calculation

        if (*cals < 0 || *joules < 0 || *ergs < 0 || *ftlbf < 0){ /* checks for negative energy */

                error = NEG_EN_ERROR;
        }

        else{ //if energy positive, continue with logic

        printf("\nCalories = %f\nJoules = %f\nErgs = %f\nFt-lb-force = %f\n\n", *cals, *joules, *ergs, *ftlbf);

                error = NO_ERROR;

        }
}

else if (scale == 4){

        *cals = (*ftlbf)*(0.324048); //cals calculation

        *joules = (*cals)*(4.184); //joules calculation

        *ergs = (*cals)*(41840000); //ergs calculation

        if (*cals < 0 || *joules < 0 || *ergs < 0 || *ftlbf < 0){ /* checks for negative energy */

                error = NEG_EN_ERROR;

        }

        else{ //if energy positive, continue with logic

        printf("\nCalories = %f\nJoules = %f\nErgs = %f\nFt-lb-force = %f\n", *cals, *joules, *ergs, *ftlbf);

                error = NO_ERROR;
        }
}

        return error; //return error to the main function where called

}

