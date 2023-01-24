#include <user_daten.hpp>
#include <runden.hpp>

void daten_zusammenrechnen( struct user_daten* user ) {

	user->lstlzz = abrunden( 2, user->lstlzz * 0.01 );
	user->solzlzz = abrunden( 2, user->solzlzz * 0.01);
	user->kst = abrunden( 2, user->kst * 0.01);
	user->gesamt_st = abrunden( 2, user->gesamt_st * 0.0001);
	user->netto_lohn = abrunden( 2, user->netto_lohn * 0.0001);

	user->gesamt_st = user->lstlzz + user->solzlzz + user->kst;
	user->sum_sv_an = user->rv + user->av + user->kv + user->pv_an;
	user->sum_sv_ag = user->rv + user->av + user->kv + user->pv_ag;
	user->netto_lohn = ( user->re4 ) * 0.01 - ( user->gesamt_st + user->sum_sv_an );
	user->gesamt_belast_ag = ( user->re4 ) * 0.01 + user->sum_sv_ag;

}