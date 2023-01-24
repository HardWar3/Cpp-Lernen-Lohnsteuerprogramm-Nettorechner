#include <user_daten.hpp>

void mre4jl( struct user_daten* user ) {

	if ( user->lzz == 1 ) {

		user->zre4j = user->re4 * 0.01;

		user->zvbezj = user->vbez * 0.01;

		user->jlfreib = user->lzzfreib * 0.01;

		user->jlhinzu = user->lzzhinzu * 0.01;

	} else if ( user->lzz == 2 ) {

		user->zre4j = ( user->re4 * 12.00 ) * 0.01;

		user->zvbezj = ( user->vbez * 12.00 ) * 0.01;

		user->jlfreib = ( user->lzzfreib * 12.00 ) * 0.01;

		user->jlhinzu = ( user->lzzhinzu * 12.00 ) * 0.01;

	} else if ( user->lzz == 3 ) {

		user->zre4j = ( user->re4 * 360.00 / 7.00 ) * 0.01;

		user->zvbezj = ( user->vbez * 360.00 / 7.00 ) * 0.01;

		user->jlfreib = ( user->lzzfreib * 360.00 / 7.00 ) * 0.01;

		user->jlhinzu = ( user->lzzhinzu * 360.00 / 7.00 ) * 0.01;

	} else {

		user->zre4j = ( user->re4 * 360.00 ) * 0.01;

		user->zvbezj = ( user->vbez * 360.00 ) * 0.01;

		user->jlfreib = ( user->lzzfreib * 360.00 ) * 0.01;

		user->jlhinzu = ( user->lzzhinzu * 360.00 ) * 0.01;

	}

	if ( user->af == 0 ) {
	
		user->f = 1;
	
	}

}