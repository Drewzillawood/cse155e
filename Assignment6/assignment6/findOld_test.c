#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {

        char *state_name;
        char *abbreviation;
        int date_of_statehood;
        char * capital;
        int capital_since_year;
        double land_area;
        int rank_in_cities_of_its_state_by_population;
        int municipal_population;
        int metropolitan_population;

} StateCapital;

StateCapital * createState(

	char *state_name,
        char *abbreviation,
        int date_of_statehood,
        char * capital,
        int capital_since_year,
        double land_area,
        int rank_in_cities_of_its_state_by_population,
        int municipal_population,
        int metropolitan_population);


StateCapital * findOldestState(StateCapital *stateCapital, int size);

StateCapital * readFile(char *fileName);

void printState(StateCapital *t);

void printAllStates(StateCapital *stateCapital, int size);

//////////////////////main

int main() {

	char fileName[] = "State_Capitals.txt";

	StateCapital * stateCapital = readFile(fileName);

	printf("Sorted by oldest state:\n");
	
	findOldestState(stateCapital, 50);

	printAllStates(stateCapital, 50);

	return 0;

}


//////////////////////end main

StateCapital * createState(

        char *state_name,
        char *abbreviation,
        int date_of_statehood,
        char * capital,
        int capital_since_year,
        double land_area,
        int rank_in_cities_of_its_state_by_population,
        int municipal_population,
        int metropolitan_population){

  StateCapital * t = (StateCapital *) malloc(sizeof(StateCapital) * 1);
  t->state_name = (char *) malloc(sizeof(char) * (strlen(state_name) + 1));
  strcpy(t->state_name, state_name);
  t->abbreviation = (char *) malloc(sizeof(char) * (strlen(abbreviation) + 1));
  strcpy(t->abbreviation, abbreviation);
  t->date_of_statehood = date_of_statehood;
  t->capital = (char *) malloc(sizeof(char) * (strlen(capital) + 1));
  strcpy(t->capital, capital);
  t->land_area = land_area;  
  t->rank_in_cities_of_its_state_by_population = rank_in_cities_of_its_state_by_population;
  t->municipal_population = municipal_population;
  t->metropolitan_population = metropolitan_population;

  return t;

}


StateCapital * readFile(char *fileName) {

  StateCapital *stateCapital = (StateCapital *) malloc(sizeof(StateCapital) * 50);

  FILE *instream = fopen(fileName, "r");
  if(instream == NULL) {
    fprintf(stderr, "Unable to open file: %s\n", fileName);
    exit(1);
  }

  //read the file, line by line
  int i=0;
  int size = 1000;
  char *tempBuffer = (char *) malloc(sizeof(char) * size);

  //discard first line
  fgets(tempBuffer, size, instream);
  while(fgets(tempBuffer, size, instream) != NULL && i < 50) {
    char state_name[100];
    int date_of_statehood, capital_since_year, rank_in_cities_of_its_state_by_population, municipal_population, metropolitan_population;
    char *abbreviation, *capital;
    double land_area;
    //remove the endline character from the line
    tempBuffer[strlen(tempBuffer)-1] = '\0';
    char *teamToken = strtok(tempBuffer, ",");
    strcpy(state_name, teamToken);

    abbreviation = strtok(NULL, ",");
    date_of_statehood = atoi(strtok(NULL, ","));
    capital = strtok(NULL, ",");
    capital_since_year = atoi(strtok(NULL, ","));
    land_area = atof(strtok(NULL, ","));
    rank_in_cities_of_its_state_by_population = atoi(strtok(NULL, ","));
    municipal_population = atoi(strtok(NULL, ","));
    metropolitan_population = atoi(strtok(NULL, ","));

    StateCapital *t = createState(state_name, abbreviation, date_of_statehood, capital, capital_since_year, land_area, rank_in_cities_of_its_state_by_population, municipal_population, metropolitan_population);

    stateCapital[i] = *t;
    i++;
  }
  fclose(instream);
  free(tempBuffer);

  return stateCapital;

}

StateCapital * findOldestState(StateCapital *stateCapital, int size){

	int i,j;
        StateCapital temp;

        for (i = 0; i < size; i++){

                for (j = i+1; j < size; j++){

                        if(stateCapital[i].date_of_statehood < stateCapital[j].date_of_statehood){

                                temp = stateCapital[i];

                                stateCapital[i] = stateCapital[j];

                                stateCapital[j] = temp;
                        }
                }
        }
}

void printState(StateCapital *t) {
  if(t == NULL) {
    printf("null\n");
    return;
  }

  printf("%s %s %d %s %d %f %d %d %d\n", t->state_name, t->abbreviation, t->date_of_statehood, t->capital, t->capital_since_year, t->land_area, t->rank_in_cities_of_its_state_by_population, t->municipal_population, t->metropolitan_population);

}


void printAllStates(StateCapital *stateCapital, int size){

	int i;
  	for(i=0; i<size; i++) {
    	printState(&stateCapital[i]);
	}

}
