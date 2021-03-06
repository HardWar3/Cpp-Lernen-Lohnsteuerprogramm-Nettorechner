#include "../user_daten.hpp"

extern void mre4( struct user_daten* user );
extern void mre4abz( struct user_daten* user );
extern void mztabfb( struct user_daten* user );

void mre4sonst( struct user_daten* user ) {

	mre4( user );

	user->fvb = user->fvbso;

	mre4abz( user );

	user->zre4vp = user->zre4vp + user->mbv / 100 - user->jre4ent / 100 - user->sonstent / 100; // TODO

	user->fvbz = user->fvbzso;

	mztabfb( user );

	user->vfrbs2 = ( user->anp + user->fvb + user->fvbz ) * 100 - user->vfrbs1;

}