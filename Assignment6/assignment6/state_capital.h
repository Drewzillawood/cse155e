/**
 * CSCE 155E
 * Fall 2015
 * Assignment 6
 */

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

/**
 * An enumeration of supported orderings of Airport structures
 */
typedef enum {

	STATE_NAME,
	STATE_NAME_DEC,
	ABBREVIATION,
	DATE_OF_STATEHOOD,
	CAPITAL,
	CAPITAL_SINCE_YEAR,
	LAND_AREA,
	RANK_IN_CITIES_OF_ITS_STATE_BY_POPULATION,
	MUNICIPAL_POPULATION,
	METROPOLITAN_POPULTATION,

} StateCapitalOrdering;

/**
 * A factory function to create a new state capital with the given attributes
 * This function should make *deep* copies of each of the relevant fields
 * and return a pointer to the newly created state capital structure.
 */
StateCapital * createStateCapital(const char *state_name, const char *abbreviation, int date_of_statehood, const char * capital, int capital_since_year, double land_area, int rank_in_cities_of_its_state_by_population, int municipal_population, int metropolitan_population);

/**
 * Constructs a new string that represents the given state capital. The details of
 * formatting are left to you, but it should be readable and provide a resonable
 * amount of details about the StateCapital structure. Moreover, the returned string
 * should be dynamically allocated.
 */
char * StateCapitalToString(const StateCapital *sc);


/**
 * Find the oldest state of a given array of StateCapital structures
 * according to their date of statehood
 */

StateCapital * findOldestState(StateCapital *stateCapital, int size);



/**
 * Find the state with the newest capital of a given array of StateCapital structures
 * according to their capital since year
 */

StateCapital * findNewestCapital(StateCapital *stateCapital, int size);

/**
 * Find the StateCapital with the greatest land Area of a given array of StateCapital structure
 */

StateCapital * findGreatestLandArea(StateCapital *stateCapital, int size);

/**
 * Find the StateCapital with the greatest ratio of municipal population by metropolitan
 * population of a given array of StateCapital structure
 */

StateCapital * findGreatestPopulationRatio(StateCapital *stateCapital, int size);

/**
 * Find all the StateCapitals of a given array of StateCapital structures
 * whose capital's rank in cities of its state by population is 1
 */

StateCapital * findCpitalRankOne (StateCapital *stateCapital, int size);

/**
 * Find the StateCapital of a given array of StateCapital structures according to a given state name 
 */
StateCapital * findState (StateCapital *stateCapital, int size, char *stateName);

/**
 *  Sorts the given array of StateCapital structures according to the specified
 *  StateCapitalOrdering.
 *  This function should make use of the standard library's qsort function.
 */
void sortStateCapitals(StateCapital *stateCapital, int size, StateCapitalOrdering order);

/**
 * A comparator function that orders the two StateCapital structures by their state name
 */
int compByStateName(const void *a, const void *b);

/**
 * A comparator function that orders the two StateCapital structures by their state name
 * in descending order (z to a)
 */
int compByStateNameDesc(const void *a, const void *b);

/**
 * A comparator function that orders the two StateCapital structures by their abbreviation
 */
int compByAbbreviation(const void *a, const void *b);

/**
 * A comparator function that orders the two StateCapital structures by their date of statehood
 */
int compByDateOfStatehood(const void *a, const void *b);

/**
 * A comparator function that orders the two StateCapital structures by their capital name
 */
int compByCapitalName(const void *a, const void *b);

/**
 * A comparator function that orders the two StateCapital structures by their capital since year
 */
int compByCapitalSinceYear(const void *a, const void *b);

/**
 * A comparator function that orders the two StateCapital structures by their land area
 */
int compByLandArea(const void *a, const void *b);

/**
 * A comparator function that orders the two StateCapital structures by their
 * capital city's rank in cities of its state by population
 */
int compByRank(const void *a, const void *b);

/**
 * A comparator function that orders the two StateCapital structures by their municipal population
 */
int compByMunicipalPopultation(const void *a, const void *b);

/**
 * A comparator function that orders the two StateCapital structures by their metropolitan population
 */
int compByMetropolitanPopulation(const void *a, const void *b);
