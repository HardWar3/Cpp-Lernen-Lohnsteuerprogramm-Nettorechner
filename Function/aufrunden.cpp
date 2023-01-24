#pragma once

double aufrunden( int wo, double was ) {

	double clean_double = 0.0;
	bool istWoKleinerDrei = wo < 3;

	double komma[3] = { 1.0, 10.0, 100.0 };

	if ( istWoKleinerDrei ) {

		clean_double = (int)( (was + 0.99) * komma[wo] ) / komma[wo];

		return clean_double;

	} else {

		return was;

	}


}