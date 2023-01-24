#include <user_daten.hpp>
#include <runden.hpp>

extern double tab( int tab,int index );

extern void mre4alte( struct user_daten* user );

void mre4( struct user_daten* user ) {

	if ( user->zvbezj == 0 ) {

		user->fvbz = 0;

		user->fvb = 0;

		user->fvbzso = 0;

		user->fvbso = 0;

	} else {
		
		if ( user->vjahr < 2006 ) {

			user->j = 1;

		} else if ( user->vjahr < 2040 ) {

			user->j = user->vjahr - 2004;

		} else {

			user->j = 36;

		}

		if ( user->lzz == 1 ) {
		
			user->vbezb = ( user->vbezm * (double)user->zmvb ) + user->vbezs;

			user->hfvb = ( tab( 2, user->j ) / 12.00 ) * (double)user->zmvb; // to do

			user->fvbz = aufrunden( 0, (tab( 3, user->j ) / 12.00 ) * (double)user->zmvb ); // aufrunden auf euro
		
		} else {

			user->vbezb = user->vbezm * 12.00 + user->vbezs;

			user->hfvb = tab( 2, user->j );

			user->fvbz = tab( 3, user->j );

		}

		user->fvb = aufrunden( 2, ( user->vbezb * tab( 1, user->j ) ) * 0.01 ); // aufrunden auf cent

		if ( user->fvb > user->hfvb ) {

			user->fvb = user->hfvb;

		}

		if ( user->fvb > user->zvbezj ) {

			user->fvb = user->zvbezj;

		}

		user->fvbso = aufrunden( 2, ( user->fvb + ( user->vbezbso * tab( 1, user->j ) ) * 0.01 ) ); // aufrunden auf cent

		if ( user->fvbso > tab( 2, user->j ) ) {

			user->fvbso = tab( 2, user->j );

		}

		user->hfvbzso = ( user->vbezb + user->vbezbso ) * 0.01 - user->fvbso;

		user->fvbzso = aufrunden( 0, ( user->fvbz + user->vbezbso * 0.01 ) ); // aufrunden auf euro

		if ( user->fvbzso > user->hfvbzso ) {

			user->fvbzso = aufrunden( 0, user->hfvbzso ); // aufreunde auf euro

		}

		if ( user->fvbzso > tab( 3, user->j ) ) {

			user->fvbzso = tab( 3, user->j );

		}

		user->hfvbz = user->vbezb * 0.01 - user->fvb;

		if ( user->fvbz > user-> hfvbz ) {

			user->fvbz = aufrunden( 0, user->hfvbz ); // aufrunden auf euro

		}

	}

	mre4alte( user );

}