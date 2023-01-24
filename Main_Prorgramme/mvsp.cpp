#include <user_daten.hpp>
#include <runden.hpp>

void mvsp( struct user_daten* user ) {

	if ( user->zre4vp > user->bbgkvpv ) {

		user->zre4vp = user->bbgkvpv;

	}

	if ( user->pkv > 0 ) {
		
		if ( user->stkl == 6 ) {

			user->vsp3 = 0;

		} else {

			user->vsp3 = user->pkpv * 12.00 * 0.01;

			if ( user->pkv == 2 ) {

				user->vsp3 = user->vsp3 - user->zre4vp * ( user->kvsatzag  + user->pvsatzag );

			}

		}

	} else {

		user->vsp3 = user->zre4vp * ( user->kvsatzan + user->pvsatzan );

	}

	user->vsp = aufrunden( 0, user->vsp3 + user->vsp1 ); // aufrunden auf ganze euro

}