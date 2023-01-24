#include <user_daten.hpp>
#include <runden.hpp>

void upanteil( struct user_daten* user ) {

	if ( user->lzz == 1 ) {

		user->anteil1 = user->jw;

	} else if ( user->lzz == 2 ) {

		user->anteil1 = abrunden( 2, user->jw / 12.00 ); // abrunden

	} else if ( user->lzz == 3 ) {

		user->anteil1 = abrunden( 2, user->jw * 7.00 / 360.00 ); // abrunden

	} else {

		user->anteil1 = abrunden( 2, user->jw / 360.00 ); // abrunden

	}

}