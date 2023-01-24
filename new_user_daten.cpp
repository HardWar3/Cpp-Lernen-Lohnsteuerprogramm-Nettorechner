#include <stdio.h>
#include <stdlib.h>

#include <user_daten.hpp>

struct user_daten* new_user_daten() {

	struct user_daten* user;

	user = ( user_daten* ) calloc( 1, sizeof( *user ));

	assert( user );

//---------------------------------------------------------------------------------------------------------------------
//	Eingabeparameter
//---------------------------------------------------------------------------------------------------------------------

	user->id_nummer			= 1;
	user->af				= 0;
	user->ajahr				= 2000;
	user->alter1			= 0;
	user->entsch			= 0;
	user->f					= 0;
	user->jfreib			= 0;
	user->jhinzu			= 0;
	user->jre4				= 0;
	user->jre4ent			= 0;
	user->jvbez				= 0;
	user->krv				= 0;
	user->kvz				= 0;
	user->lzz				= 0;
	user->lzzfreib			= 0;
	user->lzzhinzu			= 0;
	user->mbv				= 0;
	user->pkpv				= 0;
	user->pkv				= 0;
	user->pvs				= 0;
	user->pvz				= 0;
	user->r					= 0;
	user->re4				= 0;
	user->sonstb			= 0;
	user->sonstent			= 0;
	user->sterbe			= 0;
	user->stkl				= 1;
	user->vbez				= 0;
	user->vbezm				= 0;
	user->vbezs				= 0;
	user->vbs				= 0;
	user->vjahr				= 0;
	user->vkapa				= 0;
	user->vmt				= 0;
	user->zkf				= 0;
	user->zmvb				= 0;

//---------------------------------------------------------------------------------------------------------------------
// 	Ausgabeparameter
//---------------------------------------------------------------------------------------------------------------------
	
	user->bk				= 0;
	user->bks				= 0;
	user->bkv				= 0;
	user->lstlzz			= 0;
	user->solzlzz			= 0;
	user->solzs				= 0;
	user->solzv				= 0;
	user->sts				= 0;
	user->stv				= 0;
	user->vkvlzz			= 0;
	user->vkvsonst			= 0;

//---------------------------------------------------------------------------------------------------------------------
// interne Felder or Ausgbeparameter DBA
//---------------------------------------------------------------------------------------------------------------------

	user->vfrb				= 0;
	user->vfrbs1			= 0;
	user->vfrbs2			= 0;
	user->wvfrb				= 0;
	user->wvfrbm			= 0;
	user->wvfrbo			= 0;

//---------------------------------------------------------------------------------------------------------------------
// 	Interne Felder
//---------------------------------------------------------------------------------------------------------------------

	user->alte				= 0;
	user->anp				= 0;
	user->anteil1			= 0;
	user->bbgkvpv			= 0;
	user->bbgrv				= 0;
	user->bmg				= 0;
	user->diff				= 0;
	user->efa				= 0;
	user->fvb				= 0;
	user->fvbso				= 0;
	user->fvbz				= 0;
	user->fvbzso			= 0;
	user->gfb				= 0;
	user->hbalte			= 0;
	user->hfvb				= 0;
	user->hfvbz				= 0;
	user->hfvbzso			= 0;
	user->hoch				= 0;
	user->j					= 0;
	user->jbmg				= 0;
	user->jlfreib			= 0;
	user->jlhinzu			= 0;
	user->jw				= 0;
	user->k					= 0;
	user->kennvmt			= 0;
	user->kfb				= 0;
	user->kvsatzag			= 0;
	user->kvsatzan			= 0;
	user->kztab				= 0;
	user->lstjahr			= 0;
	user->lst1				= 0;
	user->lst2				= 0;
	user->lst3				= 0;
	user->lstoso			= 0;
	user->lstso				= 0;
	user->mist				= 0;
	user->pvsatzag			= 0;
	user->pvsatzan			= 0;
	user->rvsatzan			= 0;
	user->rw				= 0;
	user->sap				= 0;
	user->solzfrei			= 0;
	user->solzj				= 0;
	user->solzmin			= 0;
	user->solzsbmg			= 0;
	user->solzszve			= 0;
	user->solzvbmg			= 0;
	user->st				= 0;
	user->st1				= 0;
	user->st2				= 0;
	user->stovmt			= 0;
	user->tab1				= 0;
	user->tab2				= 0;
	user->tab3				= 0;
	user->tab4				= 0;
	user->tab5				= 0;
	user->tbsvorv			= 0;
	user->vbezb				= 0;
	user->vbezbso			= 0;
	user->vergl				= 0;
	user->vhb				= 0;
	user->vkv				= 0;
	user->vsp				= 0;
	user->vspn				= 0;
	user->vsp1				= 0;
	user->vsp2				= 0;
	user->vsp3				= 0;
	user->w1stkl5			= 0;
	user->w2stkl5			= 0;
	user->w3stkl5			= 0;
	user->x					= 0;
	user->y					= 0;
	user->zre4				= 0;
	user->zre4j				= 0;
	user->zre4vp			= 0;
	user->ztabfb			= 0;
	user->zvbez				= 0;
	user->zvbezj			= 0;
	user->zve				= 0;
	user->zx				= 0;
	user->zzx				= 0;

	// eigene felder

	user->rv				= 0;
	user->av				= 0;
	user->kv				= 0;
	user->pv_an				= 0;
	user->pv_ag				= 0;
	user->kst				= 0;
	user->gesamt_st			= 0;
	user->sum_sv_an			= 0;
	user->sum_sv_ag			= 0;
	user->netto_lohn		= 0;
	user->gesamt_belast_ag	= 0;

	return user;
};