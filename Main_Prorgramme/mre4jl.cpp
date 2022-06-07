#include "../user_daten.hpp"

void mre4jl( struct user_daten* user ) {

	if ( user->lzz == 1 ) {

		user->zre4j = user->re4 / 100; // to do

		user->zvbezj = user->vbez / 100; // to do

		user->jlfreib = user->lzzfreib / 100; // to do

		user->jlhinzu = user->lzzhinzu / 100; // to do

	} else if ( user->lzz == 2 ) {

		user->zre4j = user->re4 * 12 / 100; // to do

		user->zvbezj = user->vbez * 12 / 100; // to do

		user->jlfreib = user->lzzfreib * 12 / 100; // to do

		user->jlhinzu = user->lzzhinzu * 12 / 100; // to do

	} else if ( user->lzz == 3 ) {

		user->zre4j = user->re4 * 360 / 7 / 100; // to do

		user->zvbezj = user->vbez * 360 / 7 / 100; // to do

		user->jlfreib = user->lzzfreib * 360 / 7 / 100; // to do

		user->jlhinzu = user->lzzhinzu * 360 / 7 / 100; // to do

	} else {

		user->zre4j = user->re4 * 360 / 100; // to do

		user->zvbezj = user->vbez * 360 / 100; // to do

		user->jlfreib = user->lzzfreib * 360 / 100; // to do

		user->jlhinzu = user->lzzhinzu * 360 / 100; // to do

	}

	if ( user->af == 0 ) {
	
		user->f = 1;
	
	}

}