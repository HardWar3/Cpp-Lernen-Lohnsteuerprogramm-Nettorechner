#include "../user_daten.hpp"

extern void upvkv( struct user_daten* user );
extern void upanteil( struct user_daten* user );

void upvkvlzz( struct user_daten* user ) {

	upvkv( user );

	user->jw = user->vkv;

	upanteil( user );

	user->vkvlzz = user->anteil1;

}