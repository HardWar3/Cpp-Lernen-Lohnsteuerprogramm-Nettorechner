#include "user_daten.hpp"

void daten_zusammenrechnen( struct user_daten* user ) {

	user->gesamt_st = user->lstlzz + user->solzlzz + user->kst;
	user->sum_sv_an = user->rv + user->av + user->kv + user->pv_an;
	user->sum_sv_ag = user->rv + user->av + user->kv + user->pv_ag;
	user->netto_lohn = user->re4 - ( user->gesamt_st + user->sum_sv_an );
	user->gesamt_belast_ag = user->re4 + user->sum_sv_ag;

}