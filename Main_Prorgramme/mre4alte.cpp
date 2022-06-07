#include "../user_daten.hpp"
#include <math.h>

extern double tab( int tag, int index );

void mre4alte( struct user_daten* user ) {

	if ( user->alter1 == 0 ) {

		user->alte = 0;

	} else {

		if ( user->ajahr < 2006 ) {

			user->k = 1;

		} else if ( user->ajahr < 2040 ) {

			user->k = user->ajahr - 2004;

		} else {

			user->k = 36;

		}

		user->bmg = user->zre4j - user->zvbezj;

		user->alte = ceil( user->bmg * tab( 4, user->k ) ); // aufrunden auf euro

		user->hbalte = tab( 5, user->k );

		if ( user->alte > user->hbalte ) {

			user->alte = user->hbalte;

		}

	}

}