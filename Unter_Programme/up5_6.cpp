#include "../user_daten.hpp"
#include <math.h>

extern void uptab22( struct user_daten* user );

void up5_6( struct user_daten* user ) {

	user->x = user->zx * 1.25;

	uptab22( user );

	user->st1 = user->st;

	user->x = user->zx * 0.75;

	uptab22( user );

	user->st2 = user->st;

	user->diff = ( user->st1 - user->st2 ) * 2;

	user->mist = floor( user->zx * 0.14 ); // abrunden auf ganze euro

	if ( user->mist > user->diff ) {

		user->st = user->mist;

	} else {

		user->st = user->diff;

	}

}