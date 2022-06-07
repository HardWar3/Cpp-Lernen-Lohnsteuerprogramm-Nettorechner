#include "user_daten.hpp"
#include <iostream>

extern int Lohnsteuer_2022( struct user_daten* user );
extern void kirchensteuer( struct user_daten* user );
extern void sozialversicherung( struct user_daten* user );
extern void daten_zusammenrechnen( struct user_daten* user);

int main( int argc, char *argv[] ) {

	struct user_daten* user;

	user = new_User_daten();

	std::cout << "Bitte geben Sie Ihr Geburtsjahr ein : ---> ";
	std::cin >> user->ajahr;

	user->alter1 = 0;

	// TODO
	if ( 2022 - user->ajahr > 64 ) {

		user->alter1 = 1;

	}

	std::cout << "Soll in Monat( 1 ) oder in Jahren( 0 ) berechnet werden : ---> ";
	std::cin >> user->lzz;

	if ( user->lzz == 1 ) {

		std::cout << "Geben Sie nun ihr BruttoLohn im Monat an : ---> ";
		std::cin >> user->re4;

		user->re4 = user->re4 * 100;
		user->jre4 = user->re4 * 12;

	} else if ( user->lzz == 0 ) {

		std::cout << "Geben Sie nun ihr BruttoLohn im Jahr an : ---> ";
		std::cin >> user->re4;

		user->re4 = user->re4 * 100;
		user->jre4 = user->re4;

	}

	std::cout << "Welche Steuerklassen haben Sie : ---> ";
	std::cin >> user->stkl;

	if ( user->stkl != 1 ) {

		std::cout << "Wie viele Kinder haben Sie : ---> ";
		std::cin >> user->zkf;

	}

	user->pvz = 0;

	if ( 2022 - user->ajahr > 23 ) {

		user->pvz = 1;

	}
	
	std::cout << "Kinderlosenzuschlag ? ( 0 ) nein ( 1 ) ";
	std::cin >> user->pvz;

	std::cout << "Sind Sie in der Kirche ( Ja = 1 / Nein = 0 ) : ---> ";
	std::cin >> user->r;

	std::cout << "Welche gesetzliche Rentenversicherung sind Sie (für West 0 / für Ost 1 / für alles andere 2) : ---> ";
	std::cin >> user->krv;

	if ( user->krv == 1 ) {

		std::cout << "Wohnen Sie in Sachen ( für Ja 1 / für Nein 0 ) : ---> ";
		std::cin >> user->pvs;

	}

	std::cout << "Sind Sie gesetzlich Krankenversichert ( 0 ) / Privat ohne zuschuss ( 1 ) / Privat mit zuschuss ( 2 ) : ---> ";
	std::cin >> user->pkv;

	if ( user->pkv == 0 ) {

		std::cout << "Wie hoch ist der Zusatzbeitragssatz der gesetzlichen Krankenversicherung : ---> ";
		std::cin >> user->kvz;

	} else if ( user->pkv == 1 || user->pkv == 2 ) {

		std::cout << "Wie hoch ist der Privat Versicherungsbeitrag : ---> ";
		std::cin >> user->pkpv;
		user->pkpv = user->pkpv * 100;

	}

	Lohnsteuer_2022( user );

	if ( user->r == 1 ) {

		kirchensteuer( user );

	}

	sozialversicherung( user );
	daten_zusammenrechnen( user );

	std::cout << ">>-->>-- - GB Jahr " << user->ajahr << " - --<<--<<";
	std::cout << ">>-->>-- - LSTLZZ " << user->lstlzz << " - --<<--<<";
	std::cout << ">>-->>-- - SOLI " << user->solzlzz << " - --<<--<<";
	std::cout << ">>-->>-- - Kirche " << user->kst << " - --<<--<<";
	std::cout << ">>-->>-- - Renten " << user->rv << " - --<<--<<";
	std::cout << ">>-->>-- - Arlose " << user->av << " - --<<--<<";
	std::cout << ">>-->>-- - Kranken " << user->kv << " - --<<--<<";
	std::cout << ">>-->>-- - Pflege AN " << user->pv_an << " - --<<--<<";
	std::cout << ">>-->>-- - Pflege AG " << user->pv_ag << " - --<<--<<";
	std::cout << ">>-->>-- - Gesamt_ST " << user->gesamt_st << " - --<<--<<";
	std::cout << ">>-->>-- - sum_so_an " << user->sum_sv_an << " - --<<--<<";
	std::cout << ">>-->>-- - sum_so_ag " << user->sum_sv_ag << " - --<<--<<";
	std::cout << ">>-->>-- - netto_lohn " << user->netto_lohn << " - --<<--<<";
	std::cout << ">>-->>-- - gesammt_belast " << user->gesamt_belast_ag << " - --<<--<<";

}