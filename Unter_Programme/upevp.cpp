#include "../user_daten.hpp"
#include <math.h>

extern void mvsp( struct user_daten* user );

void upevp( struct user_daten* user ) {

	if ( user->krv > 1 ) {

		user->vsp1 = 0;

	} else {

		if ( user->zre4vp > user->bbgrv ) {

			user->zre4vp = user->bbgrv;

		}

		user->vsp1 = user->tbsvorv * user->zre4vp;

		user->vsp1 = user->vsp1 * user->rvsatzan;

	}

	user->vsp1 = 0.12 * user->zre4vp;

	if ( user->stkl == 3 ) {

		user->vhb = 3000;

	} else {

		user->vhb = 1900;

	}

	if ( user->vsp2 > user->vhb ) {

		user->vsp2 = user->vhb;

	}

	user->vspn = ceil( user->vsp1 + user->vsp2 ); // aufrunden auf ganze euro

	mvsp( user );

	if ( user->vspn > user->vsp ) {

		user->vsp = user->vspn;

	}

}