#include "user_daten.hpp"

void sozialversicherung( struct user_daten* user ) {
	const double pv = 1.525;
	const double pvs = 2.025;
	const double pvz = 0.25;

	double pv_zusammen = 0;
	double pv_ag = 0;

	user->av = user->re4 * 0.0125;

	user->kv = user->re4 * 0.0775;

	user->rv = user->re4 * 0.093;

	if ( user->pvs == 1 ) {

		if ( user->pvz == 0 ) {

			pv_zusammen = pvs;

		} else {

			pv_zusammen = pvs + pvz;

		}

	} else {

		if ( user->pvz == 0 ) {

			pv_zusammen = pv;
			pv_ag = pv;

		} else {

			pv_zusammen = pv + pvz;
			pv_ag = pv;

		}

	}

	user->pv_an = user->re4 * ( pv_zusammen / 100.0 );
	user->pv_ag = user->re4 * ( pv_ag / 100.0 );

}