#include <user_daten.hpp>
#include <runden.hpp>

extern void mosonst( struct user_daten* user );
extern void mre4sonst( struct user_daten* user );
extern void mlstjahr( struct user_daten* user );
extern void upvkv( struct user_daten* user );
extern void stsmin( struct user_daten* user );

void msonst( struct user_daten* user ) {

	user->lzz = 1;

	if ( user->zmvb == 0 ) {
	
		user->zmvb = 12;

	}

	if ( user->sonstb == 0 && user->mbv == 0 ) {

		user->vkvsonst = 0;

		user->lstso = 0;

		user->sts = 0;

		user->solzs = 0;

		user->bks = 0;

	} else {

		mosonst( user );

		upvkv( user );

		user->vkvsonst = user->vkv;

		user->zre4j = ( user->jre4 + user->sonstb ) * 0.01;

		user->zvbezj = ( user->jvbez + user->vbs ) * 0.01;

		user->vbezbso = user->sterbe;

		mre4sonst( user );

		mlstjahr( user );

		user->wvfrbm = ( user->zve - user->gfb ) * 100.00;

		if ( user->wvfrbm < 0 ) {

			user->wvfrbm = 0;

		}

		upvkv( user );

		user->vkvsonst = user->vkv - user->vkvsonst;

		user->lstso = user->st * 100.00;

		user->sts = abrunden( 0,  ( user->lstso - user->lstoso ) * user->f ); // abrunden auf ganze euro HINWEIS PAP

		stsmin( user );

	}

}
