#include "../user_daten.hpp"

void mre4abz( struct user_daten* user ) {

	user->zre4 = user->zre4j - user->fvb - user->alte - user->jlfreib + user->jlhinzu;

	if ( user->zre4 < 0 ) {

		user->zre4 = 0;

	}

	user->zre4vp = user->zre4j;

	if ( user->kennvmt == 2 ) {

		user->zre4vp = user->zre4vp - user->entsch / 100; // to do

	}

	user->zvbez = user->zvbezj - user->fvb;

	if ( user->zvbez < 0 ) {

		user->zvbez = 0;

	}

}