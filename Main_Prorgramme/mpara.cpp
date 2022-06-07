#include "../user_daten.hpp"



void mpara( struct user_daten* user ) {

	if ( user->krv < 2 ) {
	
		if ( user->krv == 0 ) {
		
			user->bbgrv = 84600;

		} else {
		
			user->bbgrv = 81000;
		
		}

		user->rvsatzan = 0.093;

		user->tbsvorv = 0.88;

	}

	user->bbgkvpv = 58050;

	user->kvsatzan = user->kvz / 2 / 100 + 0.07; // TODO			// to do

	user->kvsatzag = 0.0065 + 0.07;

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

	user->w1stkl5 = 11480;

	user->w2stkl5 = 29298;

	user->w3stkl5 = 222260;

	user->gfb = 9984;

	user->solzfrei = 16956;

}