typedef enum {CALORIE = 1, JOULE = 2, ERG = 3, FTLBF = 4} Scale; /*enumerated type declaration*/
typedef enum {NO_ERROR = 0, NEG_EN_ERROR = 5, NULL_POI_ERROR = 6} Error; /*enumerated type declaration*/

int convertEnergy (double *cals, double *joules, double *ergs, double *ftlbf, Scale scale, Error err); //function prototype
