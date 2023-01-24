#include <user_daten.hpp>

extern void mpara( struct user_daten* user );
extern void mre4jl( struct user_daten* user );
extern void mre4( struct user_daten* user );
extern void mre4abz( struct user_daten* user );
extern void mberech( struct user_daten* user );
extern void msonst( struct user_daten* user );
extern void mvmt( struct user_daten* user );


int Lohnsteuer_2023( struct user_daten* user ) {

	mpara( user );

	mre4jl( user );

	user->vbezbso = 0;

	user->kennvmt = 0;

	mre4( user );

	mre4abz( user );

	mberech( user );

	msonst( user );

	mvmt( user );

	return 0;
}