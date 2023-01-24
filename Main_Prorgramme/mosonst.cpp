#include <user_daten.hpp>

extern void mre4( struct user_daten* user );
extern void mre4abz( struct user_daten* user );
extern void mztabfb( struct user_daten* user );
extern void mlstjahr( struct user_daten* user );

void mosonst( struct user_daten* user ) {

	user->zre4j = user->jre4 * 0.01; // TODO

	user->zvbezj = user->jvbez * 0.01; // TODO

	user->jlfreib = user->jfreib * 0.01; // TODO

	user->jlhinzu = user->jhinzu * 0.01; // TODO

	mre4( user );

	mre4abz( user );

	user->zre4vp = user->zre4vp - user->jre4ent * 0.01; // TODO

	mztabfb( user );

	user->vfrbs1 = ( user->anp + user->fvb + user->fvbz ) * 100.00;

	mlstjahr( user );

	user->wvfrbo = ( user->zve - user->gfb ) * 100.00;

	if ( user->wvfrbo < 0 ) {

		user->wvfrbo = 0;

	}

	user->lstoso = user->st * 100.00;

}