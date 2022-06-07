#include "../user_daten.hpp"

extern void upevp( struct user_daten* user );
extern void upmlst( struct user_daten* user );

void mlstjahr( struct user_daten* user ) {

	upevp( user );

	if ( user->kennvmt != 1 ) {

		user->zve = user->zre4 - user->ztabfb - user->vsp;

		upmlst( user );

	} else {

		user->zve = user->zre4 - user->ztabfb - user->vsp - user->vmt / 100 - user->vkapa / 100; // to do

		if ( user->zve < 0 ) {

			user->zve = ( user->zve + user->vmt / 100 + user->vkapa / 100 ) / 5; // to do

			upmlst( user );

			user->st = user->st * 5;

		} else {

			upmlst( user );

			user->stovmt = user->st;

			user->zve = user->zve + ( user->vmt + user->vkapa ) / 500;

			upmlst( user );

			user->st = (user->st - user->stovmt) * 5 + user->stovmt;

		}

	}

}