#include "../user_daten.hpp"
#include <math.h>

extern void msolzsts( struct user_daten* user );

void stsmin( struct user_daten* user ) {

	if ( user->sts < 0 ) {

		if ( user->mbv != 0 ) {

			user->lstlzz = user->lstlzz + user->sts;

			if ( user->lstlzz < 0 ) {

				user->lstlzz = 0;

			}

			user->solzlzz = floor( user->solzlzz + user->sts * 5.5 / 100 ); // abrunden auf ganze cents TODO

			if ( user->solzlzz < 0 ) {

				user->solzlzz = 0;

			}

			user->bk = user->bk + user->sts;

			if ( user->bk < 0 ) {

				user->bk = 0;

			}

		}

		user->sts = 0;

		user->solzs = 0;

	} else {

		msolzsts( user );

	}

	if ( user->r > 0 ) {

		user->bks = user->sts;

	} else {

		user->bks = 0;

	}

}