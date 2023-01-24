#include <user_daten.hpp>
#include <runden.hpp>

extern void mosonst( struct user_daten* user );
extern void mre4sonst( struct user_daten* user );
extern void mlstjahr( struct user_daten* user );
extern void mre4abz( struct user_daten* user );

void mvmt( struct user_daten* user ) {

	if ( user->vkapa < 0 ) {

		user->vkapa = 0;

	}

	if ( ( user->vmt + user->vkapa ) > 0 ) {

		if ( user->lstso == 0 ) {

			mosonst( user );

			user->lst1 = user->lstoso;

		} else {

			user->lst1 = user->lstso;

		}

		user->vbezbso = user->sterbe + user->vkapa;

		user->zre4j = ( user->jre4 + user->sonstb + user->vmt + user->vkapa ) * 0.01; // TODO

		user->zvbezj = ( user->jvbez + user->vbs + user->vkapa ) * 0.01; // TODO

		user->kennvmt = 2;

		mre4sonst( user );

		mlstjahr( user );

		user->lst3 = user->st * 100.00;

		mre4abz( user );

		user->zre4vp = user->zre4vp - user->jre4ent * 0.01 - user->sonstent * 0.01; // TODO

		user->kennvmt = 1;

		mlstjahr( user );

		user->lst2 = user->st * 100.00;

		user->stv = user->lst2 - user->lst1;

		user->lst3 = user->lst3 - user->lst1;

		if ( user->lst3 < user->stv ) {

			user->stv = user->lst3;

		}

		if ( user->stv < 0 ) {

			user->stv = 0;

		} else {

			user->stv = abrunden( 0, user->stv * user->f ); // abrunden auf ganze euro

		}

		user->solzvbmg = user->stv * 0.01 + user->jbmg; // TODO

		if ( user->solzvbmg > user->solzfrei ) {

			user->solzv = abrunden( 2, user->stv * 5.5 * 0.01 ); // abrunden auf ganze cents TODO

		} else {

			user->solzv = 0;

		}

		if ( user->r > 0 ) {

			user->bkv = user->stv;

		}
		else {
		
			user->bkv = 0;

		}

	} else {

		user->stv = 0;

		user->solzv = 0;

		user->bkv = 0;

	}

}