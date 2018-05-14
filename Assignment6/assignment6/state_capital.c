#include<stdio.h> //preprocessing directive standard input/output library
#include<stdlib.h> //preprocessing directive standard library
#include<string.h> //preprocessing directive string library
#include<search.h> //preprocessing directive standard input library
#include"state_capital.h" //header file where function prototypes are

StateCapital * createStateCapital(const char *State_name, const char *Abbreviation, int Date_of_statehood, const char * Capital, int Capital_since_year, double Land_area, int Rank_in_cities_of_its_state_by_population, int Municipal_population, int Metropolitan_population){ //function definition to make deep copies

	StateCapital *crt = (StateCapital*)malloc(sizeof(StateCapital)*1);

        crt->state_name = (char*)malloc(sizeof(char)* (strlen(State_name)+1));
        strcpy(crt->state_name, State_name);

        crt->abbreviation =(char*)malloc(sizeof(char)* (strlen(Abbreviation)+1));
        strcpy(crt->abbreviation, Abbreviation);

        crt->date_of_statehood = Date_of_statehood;

        crt->capital = (char*)malloc(sizeof(char)* (strlen(Capital)+1));
        strcpy(crt->capital, Capital);

        crt->capital_since_year = Capital_since_year;

        crt->land_area = Land_area;

        crt->rank_in_cities_of_its_state_by_population = Rank_in_cities_of_its_state_by_population;

        crt->municipal_population = Municipal_population;

        crt->metropolitan_population = Metropolitan_population;

        return crt; //return deep copy
}

char * StateCapitalToString(const StateCapital *sc){

	char *StateCapitalString = (char*)malloc(sizeof(char)*1000); //dynamically allocated large enough

	double ratio = (double)sc->municipal_population/(double)sc->metropolitan_population; //necessary to print the ration as well

	sprintf(StateCapitalString, "%s, %d, %s, %s, %d, %.1f, %d, %d, %d, %.2f", sc->state_name, sc->date_of_statehood, sc->abbreviation, sc->capital, sc->capital_since_year, sc->land_area, sc->rank_in_cities_of_its_state_by_population, sc->municipal_population, sc->metropolitan_population, ratio); //sprintf allows for this format

	return StateCapitalString; //return string

}

StateCapital * findOldestState(StateCapital *stateCapital, int size){ //function definition to find oldest state

	int oldestState = stateCapital[0].date_of_statehood;
	
	int index = 0;
	int i;

	for (i = 0; i < size; i++){ //loop through each each state

		if (stateCapital[i].date_of_statehood < oldestState){

			oldestState = stateCapital[i].date_of_statehood;

			index = i; //increments index in parallel with i
		}

	}

	return &stateCapital[index]; //return the index value of the oldest state
}	

StateCapital * findNewestCapital(StateCapital *stateCapital, int size){ //function to find new capital

	int newCap = stateCapital[0].capital_since_year;

        int index = 0;
        int i;

        for (i = 0; i < size; i++){ //for loop through each state

                if (stateCapital[i].capital_since_year > newCap){

                       newCap = stateCapital[i].capital_since_year;

                       index = i; //increments index in parallel with i
                }

        }

        return &stateCapital[index]; //return the index value of the newest capital
}

StateCapital * findGreatestLandArea(StateCapital *stateCapital, int size){ //function to find largest land area of state

	int greatLan = stateCapital[0].land_area;

        int index = 0;
        int i;

        for (i = 0; i < size; i++){ //for loop through each state

                if (stateCapital[i].land_area > greatLan){ //increments index in parallel with i

                       greatLan = stateCapital[i].land_area;

                       index = i;
                }

        }

        return &stateCapital[index]; //return the index value of the greatest land area
}

StateCapital * findGreatestPopulationRatio(StateCapital *stateCapital, int size){ //function to find largest population ratio

        int i, j;

	int index = 0;

	double rank[50]; //static double data type array (on stack), not dynamic to heap

        for (i = 0; i < size; i++){ //for loop through each state

        	rank[i] = (stateCapital[i].municipal_population/stateCapital[i].metropolitan_population); //for loop fills array

	}

	double largest = rank[0];

	for (j = 0; j < size; j++){

		if (rank[i] > largest){

			largest = rank[i];
	
			index++; //important, allows for state of greatest population ration identification

			}

	}

	return &stateCapital[index]; //return the index value of the greatest ratio of population

}

StateCapital * findCpitalRankOne (StateCapital *stateCapital, int size){ //function to find city population rank in state

	int i, rankCount = 0;
	for (i = 0; i < size; i++) {

		if(stateCapital[i].rank_in_cities_of_its_state_by_population == 1) {

	        rankCount++; //important, tells us how large dyanmic array below should be

      		}
  	}

	StateCapital *rankArray = (StateCapital *) malloc(sizeof(StateCapital) *rankCount); //dynamic allocation

	int j = 0;

	for (i = 0; i < size; i++) {

		if(stateCapital[i].rank_in_cities_of_its_state_by_population == 1) { //condition of top rank

         	rankArray[j] = stateCapital[i]; //fill new rankArray with stateCapital data
	
		j++; //important to keep i and j elements seperate because rankArray has only rankCount spots

		}

		else{
		
		//do nothing
		
		}

  	}

  	return rankArray; //return the array with the top city in states 
}

StateCapital * findState (StateCapital *stateCapital, int size, char *stateName){ //function to find if state present in data when given name of state

	int i;

        StateCapital *found = (StateCapital *) malloc(sizeof(StateCapital) *1); //dynamic allocation *1 due to only one match, one state identifies

	int j = 0;

	for (i = 0; i < size; i++){

		int check = strcmp(stateCapital[i].state_name, stateName);

		if(check == 0){ //match

		found[j] = stateCapital[i];

		return found; //return said match
	
		}

		else {

		//do nothing

		}
	}

	return NULL; //important for driver to know not present
}

void sortStateCapitals(StateCapital *stateCapital, int size, StateCapitalOrdering order){ //function that uses enums and comparator functions

//qsort is a built in sorting function, when combined with a comparater function, very effective

	size_t numOfElements = size;

	if (order == STATE_NAME){

		qsort(stateCapital, numOfElements, sizeof(StateCapital), compByStateName);

	}

	else if(order == STATE_NAME_DEC){

		qsort(stateCapital, numOfElements, sizeof(StateCapital), compByStateNameDesc);

	}

	else if(order == ABBREVIATION){

		qsort(stateCapital, numOfElements, sizeof(StateCapital), compByAbbreviation);

	}

	else if(order == DATE_OF_STATEHOOD){

		qsort(stateCapital, numOfElements, sizeof(StateCapital), compByDateOfStatehood);

	}

	else if(order == CAPITAL){

                qsort(stateCapital, numOfElements, sizeof(StateCapital), compByCapitalName);

        }

	else if(order == CAPITAL_SINCE_YEAR){

                qsort(stateCapital, numOfElements, sizeof(StateCapital), compByCapitalSinceYear);

        }

	else if(order == LAND_AREA){

                qsort(stateCapital, numOfElements, sizeof(StateCapital), compByLandArea);

        }

	else if(order == RANK_IN_CITIES_OF_ITS_STATE_BY_POPULATION){

                qsort(stateCapital, numOfElements, sizeof(StateCapital), compByRank);

        }

	else if(order == MUNICIPAL_POPULATION){

                qsort(stateCapital, numOfElements, sizeof(StateCapital), compByMunicipalPopultation);

        }

	else if(order == METROPOLITAN_POPULTATION){

                qsort(stateCapital, numOfElements, sizeof(StateCapital), compByMetropolitanPopulation);

        }

}

int compByStateName(const void *a, const void *b){ //comparator for names

	const StateCapital *t1 = (const StateCapital *)a;
	const StateCapital *t2 = (const StateCapital *)b;

	int result = strcmp(t1->state_name, t2->state_name);
  	
	return result;

}

int compByStateNameDesc(const void *a, const void *b){ //comparator for name decending

	const StateCapital *t1 = (const StateCapital *)a;
        const StateCapital *t2 = (const StateCapital *)b;

	int result = strcmp(t2->state_name, t1->state_name);

        return result;

}

int compByAbbreviation(const void *a, const void *b){ //comparator for abbreviations

	const StateCapital *t1 = (const StateCapital *)a;
        const StateCapital *t2 = (const StateCapital *)b;

        int result = strcmp(t1->abbreviation, t2->abbreviation);

        return result;

}

int compByDateOfStatehood(const void *a, const void *b){ //comparator for date of statehood

	const StateCapital *t1 = (const StateCapital *)a;
        const StateCapital *t2 = (const StateCapital *)b;

	int t1_1 = t1->date_of_statehood;
	int t2_2 = t2->date_of_statehood;

	if(t1_1 < t2_2) {

	    return -1;

  	} else if(t1_1 == t2_2) {

    	return 0;

  	} else {

    	return 1;

  	}
}

int compByCapitalName(const void *a, const void *b){ //comparator for capital names

	const StateCapital *t1 = (const StateCapital *)a;
        const StateCapital *t2 = (const StateCapital *)b;

	int result = strcmp(t1->capital, t2->capital);

        return result;

}

int compByCapitalSinceYear(const void *a, const void *b){ //comparator for capital since year

	const StateCapital *t1 = (const StateCapital *)a;
        const StateCapital *t2 = (const StateCapital *)b;

	int t1_1 = t1-> capital_since_year;
        int t2_2 = t2-> capital_since_year;

        if(t1_1 < t2_2) {

            return -1;

        } else if(t1_1 == t2_2) {

        return 0;

        } else {

        return 1;

        }

}

int compByLandArea(const void *a, const void *b){ //comparator for land area

	const StateCapital *t1 = (const StateCapital *)a;
        const StateCapital *t2 = (const StateCapital *)b;

        double t1_1 = t1-> land_area;
        double t2_2 = t2-> land_area;

        if(t1_1 < t2_2) {

            return -1;

        } else if(t1_1 == t2_2) {

        return 0;

        } else {

        return 1;

        }

}

int compByRank(const void *a, const void *b){ //comparator for city rank in state

	const StateCapital *t1 = (const StateCapital *)a;
        const StateCapital *t2 = (const StateCapital *)b;

        int t1_1 = t1-> rank_in_cities_of_its_state_by_population;
        int t2_2 = t2-> rank_in_cities_of_its_state_by_population;

        if(t1_1 < t2_2) {

            return -1;

        } else if(t1_1 == t2_2) {

        return 0;

        } else {

        return 1;

        }

}

int compByMunicipalPopultation(const void *a, const void *b){ //comparator for municipal populations

	const StateCapital *t1 = (const StateCapital *)a;
        const StateCapital *t2 = (const StateCapital *)b;

        int t1_1 = t1-> municipal_population;
        int t2_2 = t2-> municipal_population;

        if(t1_1 < t2_2) {

            return -1;

        } else if(t1_1 == t2_2) {

        return 0;

        } else {

        return 1;

        }
}

int compByMetropolitanPopulation(const void *a, const void *b){ //comparator for metropolitan population

	const StateCapital *t1 = (const StateCapital *)a;
        const StateCapital *t2 = (const StateCapital *)b;

        int t1_1 = t1-> metropolitan_population;
        int t2_2 = t2-> metropolitan_population;

        if(t1_1 < t2_2) {

            return -1;

        } else if(t1_1 == t2_2) {

        return 0;

        } else {

        return 1;

        }
}

