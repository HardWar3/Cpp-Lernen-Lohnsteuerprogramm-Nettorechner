#include "eingabe.hpp"
#include <iostream>

std::string Eingabe::Create_Eingabe( void ) {

	std::string eingabe;
	bool is_Eingabe_valide = false;

	do{
	
		//TODO
		std::cin >> eingabe;
		is_Eingabe_valide = Eingabe_Kontrolle( eingabe );

	} while ( is_Eingabe_valide );

	return eingabe;

}

bool Eingabe::Eingabe_Kontrolle( std::string eingabe ) {

	for ( std::string::size_type index = 0; index < eingabe.size(); index++ ) {
	
		//TODO
		char eingabe_Char;
		bool isKomma = true; //TODO name

		eingabe_Char = eingabe[index];

		if ( eingabe_Char == ',' || eingabe_Char == '.') {

			//TODO
			if ( isKomma ) {

				if (eingabe_Char == ',') {

					eingabe[index] = '.';
					isKomma = false;

				} else {

					isKomma = false;

				}

			} else {

				return true;

			}

		} else if ( eingabe_Char < '0' || eingabe_Char > '9') {

			//TODO
			return true;

		}
	
	}

	return false;

}
