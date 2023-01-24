#include <stdlib.h>

double tab( int tab, int index ) {

	if ( index <= 15 ) {
		
		if ( tab == 1 || tab == 4 ) {

			return 0.400 - ( (double)( index - 1 ) * 0.016 );

		} else if ( tab == 2 ) {

			return 3000 - ( (double)( index - 1 ) * 120 );

		} else if ( tab == 3 ) {

			return 900 - ( (double)( index - 1 ) * 36 );

		} else if ( tab == 5 ) {

			return 1900 - ( (double)( index - 1 ) * 76 );

		}

	} else if ( index == 36 ) {

		return 0;

	} else if ( index >= 16 ) {

		if ( tab == 1 || tab == 4 ) {

			return 0.160 - ( (double)( index - 16 ) * 0.008 );

		} else if ( tab == 2 ) {

			return 1200 - ( (double)( index - 16 ) * 60 );

		} else if ( tab == 3 ) {

			return 360 - ( (double)( index - 16 ) * 18 );

		} else if ( tab == 5 ) {

			return 760 - ( (double)( index - 16 ) * 38 );

		}

	}

	return 0;

}