#include "../user_daten.hpp"
#include <math.h>

void upanteil( struct user_daten* user ) {

	if ( user->lzz == 1 ) {

		user->anteil1 = user->jw;

	} else if ( user->lzz == 2 ) {

		user->anteil1 = floor( user->jw / 12 ); // abrunden

	} else if ( user->lzz == 3 ) {

		user->anteil1 = floor( user->jw * 7 / 360 ); // abrunden

	} else {

		user->anteil1 = floor( user->jw / 360 ); // abrunden

	}

}