#include <user_daten.hpp>
#include <iostream>
#include <iomanip>
#include <Windows.h>

extern int Lohnsteuer_2023( struct user_daten* user );
extern void kirchensteuer( struct user_daten* user );
extern void sozialversicherung( struct user_daten* user );
extern void daten_zusammenrechnen( struct user_daten* user);

int main( int argc, char *argv[] ) {
	struct user_daten* user;
	int old_precision;

	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);
	
	user = new_user_daten();

	std::cout << "Bitte geben Sie Ihr Geburtsjahr ein : ---> ";
	std::cin >> user->ajahr;

	user->alter1 = 0;

	// TODO
	if ( 2023 - user->ajahr > 64 ) {

		user->alter1 = 1;

	}

	std::cout << "Soll in Monat( 1 ) oder in Jahren( 0 ) berechnet werden : ---> ";
	std::cin >> user->lzz;

	if ( user->lzz == 1 ) {

		user->lzz = 2;

		std::cout << "Geben Sie nun ihr BruttoLohn im Monat an : ---> ";
		std::cin >> user->re4;

		user->re4 = user->re4 * 100.0;
		user->jre4 = user->re4 * 12.0;

	} else if ( user->lzz == 0 ) {

		user->lzz = 1;

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

	if ( 2022 - user->ajahr > 23 ) {

		user->pvz = 1;

	}
	
	std::cout << "Kinderlosenzuschlag ?  ( 0 ) nein ( 1 ) ";
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

	Lohnsteuer_2023( user );

	if ( user->r == 1 ) {

		kirchensteuer( user );

	}

	sozialversicherung( user );
	daten_zusammenrechnen( user );


	old_precision = std::cout.precision();
	std::cout << std::setprecision(2);
	std::cout << std::fixed;
	std::cout << ">>-->>-- - GB Jahr " << user->ajahr << " - --<<--<<" << std::endl;
	std::cout << ">>-->>-- - LSTLZZ " << user->lstlzz << " - --<<--<<" << std::endl;
	std::cout << ">>-->>-- - SOLI " << user->solzlzz << " - --<<--<<" << std::endl;
	std::cout << ">>-->>-- - Kirche " << user->kst << " - --<<--<<" << std::endl;
	std::cout << ">>-->>-- - Rente " << user->rv << " - --<<--<<" << std::endl;
	std::cout << ">>-->>-- - Arlose " << user->av << " - --<<--<<" << std::endl;
	std::cout << ">>-->>-- - Kranken " << user->kv << " - --<<--<<" << std::endl;
	std::cout << ">>-->>-- - Pflege AN " << user->pv_an << " - --<<--<<" << std::endl;
	std::cout << ">>-->>-- - Pflege AG " << user->pv_ag << " - --<<--<<" << std::endl;
	std::cout << ">>-->>-- - Gesamt_ST " << user->gesamt_st << " - --<<--<<" << std::endl;
	std::cout << ">>-->>-- - sum_so_an " << user->sum_sv_an << " - --<<--<<" << std::endl;
	std::cout << ">>-->>-- - sum_so_ag " << user->sum_sv_ag << " - --<<--<<" << std::endl;
	std::cout << ">>-->>-- - netto_lohn " << user->netto_lohn << " - --<<--<<" << std::endl;
	std::cout << ">>-->>-- - gesammt_belast " << user->gesamt_belast_ag << " - --<<--<<" << std::endl;
	std::cout << std::setprecision(old_precision);
	std::cout << std::fixed;

}