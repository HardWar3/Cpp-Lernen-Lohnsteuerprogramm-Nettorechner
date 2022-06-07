#include "../user_daten.hpp"
#include <math.h>

void mztabfb( struct user_daten* user ) {

	user->anp = 0;

	if ( user->zvbez >= 0 ) {

		if ( user->zvbez < user->fvbz ) {

			user->fvbz = user->zvbez;

		}

	}

	if ( user->stkl < 6 ) {

		if ( user->zvbez > 0 ) {

			if ( user->zvbez - user->fvbz < 102 ) {

				user->anp = ceil( user->zvbez - user->fvbz ); // aufrunden auf euro

			} else {

				user->anp = 102;

			}

		}

	} else {

		user->fvbz = 0;

		user->fvbzso = 0;

	}

	if ( user->stkl < 6 ) {
	
		if ( user->zre4 > user->zvbez ) {

			if ( user->zre4 - user->zvbez < 1000 ) {
			
				user->anp = ceil( user->anp + user->zre4 - user->zvbez ); // aufrunden auf euro
			
			} else {

				user->anp = user->anp + 1000;

			}

		}
	
	}

	user->kztab = 1;

	if ( user->stkl == 1 ) {

		user->sap = 36;

		user->kfb = user->kfb * 8388;

	} else if ( user->stkl == 2 ) {

		user->efa = 4008;

		user->sap = 36;

		user->kfb = user->zkf * 8388;

	} else if ( user->stkl == 3 ) {

		user->kztab = 2;

		user->sap = 36;

		user->kfb = user->zkf * 8388;

	} else if ( user->stkl == 4 ) {

		user->sap = 36;

		user->kfb = user->zkf * 4194;

	} else if ( user->stkl == 5 ) {

		user->sap = 36;

		user->kfb = 0;

	} else {

		user->kfb = 0;

	}

	user->ztabfb = user->efa + user->anp + user->sap + user->fvbz;

}