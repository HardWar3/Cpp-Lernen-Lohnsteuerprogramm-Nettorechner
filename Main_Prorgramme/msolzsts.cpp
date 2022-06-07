#include "../user_daten.hpp"
#include <math.h>

extern void mst5_6( struct user_daten* user );
extern void uptab22( struct user_daten* user );

void msolzsts( struct user_daten* user ) {

	if ( user->zkf > 0 ) { 
	
		user->solzszve = user->zve - user->kfb;
	
	} else {

		user->solzszve = user->zve;

	}

	if ( user->solzszve < 1 ) {

		user->solzszve = 0;

		user->x = 0;

	} else {

		user->x = floor( user->solzszve / user->kztab ); //abrunden auf ganze euros TODO

	}

	if ( user->stkl < 5 ) {

		uptab22( user );

	} else {

		mst5_6( user );

	}

	user->solzsbmg = floor( user->st * user->f ); // abrunden auf ganze euro

	if ( user->solzsbmg > user->solzfrei ) {

		user->solzs = floor( user->sts * 5.5 / 100 ); //abrunden auf ganze cents TODO

	} else {

		user->solzs = 0;

	}

}