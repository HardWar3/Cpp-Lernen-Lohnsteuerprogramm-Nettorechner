#include <user_daten.hpp>
#include <runden.hpp>

extern void upanteil( struct user_daten* user );

void msolz( struct user_daten* user ) {

	user->solzfrei = user->solzfrei * (double)user->kztab;

	if ( user->jbmg > user->solzfrei ) {

		user->solzj = abrunden( 2, ( user->jbmg * 5.5 * 0.01 ) ); // abrunde auf ganze cents und TODO

		user->solzmin = ( user->jbmg - user->solzfrei ) * 0.119; // TODO

		if ( user->solzmin < user->solzj ) {

			user->solzj = user->solzmin;

		}

		user->jw = user->solzj * 100.00;

		upanteil( user );

		user->solzlzz = user->anteil1;

	} else {
	
		user->solzlzz = 0;

	}

	if ( user->r > 0 ) {

		user->jw = user->jbmg * 100.00;

		upanteil( user );

		user->bk = user->anteil1;

	} else {

		user->bk = 0;

	}

}