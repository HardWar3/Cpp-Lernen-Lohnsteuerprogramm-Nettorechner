#include <user_daten.hpp>
#include <runden.hpp>

extern void up5_6( struct user_daten* user );

void mst5_6( struct user_daten* user ) {

	user->zzx = user->x;

	if ( user->zzx > user->w2stkl5 ) {

		user->zx = user->w2stkl5;

		up5_6( user );

		if ( user->zzx > user->w3stkl5 ) {

			user->st = abrunden( 0, user->st + (double)(( user->w3stkl5 - user->w2stkl5 )) * 0.42 ); // abrunden auf ganze euro

			user->st = abrunden( 0, user->st + ( user->zzx - user->w3stkl5 ) * 0.45 ); // abrunden auf ganze euro

		} else {

			user->st = abrunden( 0, user->st + ( user->zzx - user->w2stkl5 ) * 0.42 ); // abrunden auf ganze euro

		}

	} else {

		user->zx = user->zzx;

		up5_6( user );

		if ( user->zzx > user->w1stkl5 ) {

			user->vergl = user->st;

			user->zx = user->w1stkl5;

			up5_6( user );

			user->hoch = abrunden( 0, user->st + ( user->zzx - user->w1stkl5 ) * 0.42 ); // abrunden auf ganze euro

			if ( user->hoch < user->vergl ) {

				user->st = user->hoch;

			} else {

				user->st = user->vergl;

			}

		}

	}

}