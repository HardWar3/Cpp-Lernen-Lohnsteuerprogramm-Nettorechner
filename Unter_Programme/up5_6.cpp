#include <user_daten.hpp>
#include <runden.hpp>

extern void uptab23( struct user_daten* user );

void up5_6( struct user_daten* user ) {

	user->x = user->zx * 1.25;

	uptab23( user );

	user->st1 = user->st;

	user->x = user->zx * 0.75;

	uptab23( user );

	user->st2 = user->st;

	user->diff = ( user->st1 - user->st2 ) * 2.00;

	user->mist = abrunden( 0, user->zx * 0.14 ); // abrunden auf ganze euro

	if ( user->mist > user->diff ) {

		user->st = user->mist;

	} else {

		user->st = user->diff;

	}

}