#include <user_daten.hpp>

void upvkv( struct user_daten* user ) {

	if ( user->pkv > 0 ) {

		if ( user->vsp2 > user->vsp3 ) {

			user->vkv = user->vsp2 * 100.00;

		} else {
			
			user->vkv = user->vsp3 * 100.00;

		}

	} else {

		user->vkv = 0;

	}

}