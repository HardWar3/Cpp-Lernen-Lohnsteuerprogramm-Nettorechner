#include <user_daten.hpp>
#include <runden.hpp>

extern void mst5_6( struct user_daten* user );
extern void uptab23( struct user_daten* user );

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

		user->x = abrunden( 0, ( user->solzszve / (double)user->kztab ) ); //abrunden auf ganze euros TODO

	}

	if ( user->stkl < 5 ) {

		uptab23( user );

	} else {

		mst5_6( user );

	}

	user->solzsbmg = abrunden( 0, ( user->st * user->f ) ); // abrunden auf ganze euro

	if ( user->solzsbmg > user->solzfrei ) {

		user->solzs = abrunden( 2, ( user->sts * 5.5 * 0.01 ) ); //abrunden auf ganze cents TODO

	} else {

		user->solzs = 0;

	}

}