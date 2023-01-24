#include <user_daten.hpp>



void mpara( struct user_daten* user ) {

	if ( user->krv < 2 ) {
	
		if ( user->krv == 0 ) {
		
			user->bbgrv = 87600;

		} else {
		
			user->bbgrv = 85200;
		
		}

		user->rvsatzan = 0.093;

		user->tbsvorv = 1.00;

	}

	user->bbgkvpv = 59850;

	user->kvsatzan = user->kvz / 200.00 + 0.07;

	user->kvsatzag = 0.008 + 0.07;

	if ( user->pvs == 1 ) {
	
		user->pvsatzan = 0.02025;
		
		user->pvsatzag = 0.01025;
	
	} else {

		user->pvsatzan = 0.01525;

		user->pvsatzag = 0.01525;

	}

	if ( user->pvz == 1 ) {

		user->pvsatzan = user->pvsatzan + 0.0035;

	}

	user->w1stkl5 = 12485;

	user->w2stkl5 = 31404;

	user->w3stkl5 = 222260;

	user->gfb = 10908;

	user->solzfrei = 17543;

}