#include "../user_daten.hpp"
#include <math.h>

extern void mst5_6( struct user_daten* user );
extern void uptab22( struct user_daten* user );

void upmlst( struct user_daten* user ) {

	if ( user->zve < 1 ) {

		user->zve = 0;

		user->x = 0;

	} else {
	
		user->x = floor( user->zve / user->kztab ); // abrunden auf ganze euro

	}

	if ( user->stkl < 5 ) {
		
		uptab22( user );

	} else {		
		
		mst5_6( user );

	}

}