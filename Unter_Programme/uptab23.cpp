#include <user_daten.hpp>
#include <runden.hpp>

void uptab23( struct user_daten* user ) {

	if ( user->x < user->gfb + 1 ) {

		user->st = 0;

	} else if ( user->x < 16000 ) {

		user->y = ( user->x - user->gfb ) * 0.0001;

		user->rw = user->y * 979.18;

		user->rw = user->rw + 1400.00;

		user->st = abrunden( 0, user->rw * user->y ); // abrunden

	} else if ( user->x < 62810 ) {

		user->y = ( user->x - 15999.00 ) * 0.0001;

		user->rw = user->y * 192.59;

		user->rw = user->rw + 2397.00;

		user->rw = user->rw * user->y;

		user->st = abrunden( 0, user->rw + 966.53 ); // abrunden

	} else if ( user->x < 277826 ) {

		user->st = abrunden( 0, user->x * 0.42 - 9972.98 ); // abrunden

	} else {

		user->st = abrunden( 0, user->x * 0.45 - 18307.73); // abrunden

	}

	user->st = user->st * (double)user->kztab;

}