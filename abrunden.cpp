double abrunden( int wo, double was ) {

	double clean_double = 0.0;

	double komma[3] = { 1.0, 10.0, 100.0 };

	if ( wo > 3 ) {

		clean_double = (int)( was * komma[wo] ) / komma[wo];

		return clean_double;

	} else {

		return was;

	}

}