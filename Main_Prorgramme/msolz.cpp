#include "../user_daten.hpp"
#include <math.h>

extern void upanteil( struct user_daten* user );

void msolz( struct user_daten* user ) {

	user->solzfrei = user->solzfrei * user->kztab;

	if ( user->jbmg > user->solzfrei ) {

		user->solzj = floor( user->jbmg * 5.5 / 100 ); // abrunde auf ganze cents und TODO

		user->solzmin = ( user->jbmg - user->solzfrei ) * 11.9 / 100; // TODO

		if ( user->solzmin < user->solzj ) {

			user->solzj = user->solzmin;

		}

		user->jw = user->solzj * 100;

		upanteil( user );

		user->solzlzz = user->anteil1;

	} else {
	
		user->solzlzz = 0;

	}

	if ( user->r > 0 ) {

		user->jw = user->jbmg * 100;

		upanteil( user );

		user->bk = user->anteil1;

	} else {

		user->bk = 0;

	}

}