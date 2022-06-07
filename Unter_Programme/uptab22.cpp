#include "../user_daten.hpp"
#include <math.h>

void uptab22( struct user_daten* user ) {

	if ( user->x < user->gfb + 1 ) {

		user->st = 0;

	} else if ( user->x < 14927 ) {

		user->y = ( user->x - user->gfb ) / 10000;

		user->rw = user->y * 1008.70;

		user->rw = user->rw + 1400;

		user->st = floor( user->rw * user->y ); // abrunden TODO

	} else if ( user->x < 58597 ) {

		user->y = ( user->x - 14926 ) / 10000;

		user->rw = user->y * 206.43;

		user->rw = user->rw + 2397;

		user->rw = user->rw * user->y;

		user->st = floor( user->rw + 938.24 ); // abrunden TODO

	} else if ( user->x < 277826 ) {

		user->st = floor( user->x * 0.42 - 9267.56 ); // abrunden TODO

	} else {

		user->st = floor( user->x * 0.45 - 17602.28); // abrunden TODO

	}

}