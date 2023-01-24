#include <user_daten.hpp>
#include <runden.hpp>

extern void mst5_6( struct user_daten* user );
extern void uptab23( struct user_daten* user );

void upmlst( struct user_daten* user ) {

	if ( user->zve < 1 ) {

		user->zve = 0;

		user->x = 0;

	} else {
	
		user->x = abrunden( 0, user->zve / (double)user->kztab ); // abrunden auf ganze euro

	}

	if ( user->stkl < 5 ) {
		
		uptab23( user );

	} else {		
		
		mst5_6( user );

	}

}