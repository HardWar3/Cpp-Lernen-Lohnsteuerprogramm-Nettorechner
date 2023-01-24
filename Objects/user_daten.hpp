#pragma once

#include <assert.h>

struct user_daten {

//------------------------------------------------------
// Eingabeparameter
//------------------------------------------------------

	int id_nummer;
	int af;
	int ajahr;
	int alter1;
	double entsch;
	double f;
	double jfreib;
	double jhinzu;
	double jre4;
	double jre4ent;
	double jvbez;
	int krv;
	double kvz;
	int lzz;
	double lzzfreib;
	double lzzhinzu;
	double mbv;
	double pkpv;
	int pkv;
	int pvs;
	int pvz;
	int r;
	double re4;
	double sonstb;
	double sonstent;
	double sterbe;
	int stkl;
	double vbez;
	double vbezm;
	double vbezs;
	double vbs;
	int vjahr;
	double vkapa;
	double vmt;
	double zkf;
	int zmvb;

//------------------------------------------------------
// Ausgabeparameter
//------------------------------------------------------

	double bk;
	double bks;
	double bkv;
	double lstlzz;
	double solzlzz;
	double solzs;
	double solzv;
	double sts;
	double stv;
	double vkvlzz;
	double vkvsonst;

//------------------------------------------------------
// interne Felder or Ausgabeparameter DBA
//------------------------------------------------------

	double vfrb;
	double vfrbs1;
	double vfrbs2;
	double wvfrb;
	double wvfrbm;
	double wvfrbo;

//------------------------------------------------------
// Interne Felder
//------------------------------------------------------

	double alte;
	double anp;
	double anteil1;
	double bbgkvpv;
	double bbgrv;
	double bmg;
	double diff;
	double efa;
	double fvb;
	double fvbso;
	double fvbz;
	double fvbzso;
	double gfb;
	double hbalte;
	double hfvb;
	double hfvbz;
	double hfvbzso;
	double hoch;
	int j;
	double jbmg;
	double jlfreib;
	double jlhinzu;
	double jw;
	int k;
	int kennvmt;
	double kfb;
	double kvsatzag;
	double kvsatzan;
	int kztab;
	double lstjahr;
	double lst1;
	double lst2;
	double lst3;
	double lstoso;
	double lstso;
	double mist;
	double pvsatzag;
	double pvsatzan;
	double rvsatzan;
	double rw;
	double sap;
	double solzfrei;
	double solzj;
	double solzmin;
	double solzsbmg;
	double solzszve;
	double solzvbmg;
	double st;
	double st1;
	double st2;
	double stovmt;
	double tab1;
	double tab2;
	double tab3;
	double tab4;
	double tab5;
	double tbsvorv;
	double vbezb;
	double vbezbso;
	double vergl;
	double vhb;
	double vkv;
	double vsp;
	double vspn;
	double vsp1;
	double vsp2;
	double vsp3;
	double w1stkl5;
	double w2stkl5;
	double w3stkl5;
	double x;
	double y;
	double zre4;
	double zre4j;
	double zre4vp;
	double ztabfb;
	double zvbez;
	double zvbezj;
	double zve;
	double zx;
	double zzx;

	// eigene Felden

	double rv;
	double av;
	double kv;
	double pv_an;
	double pv_ag;
	double kst;
	double gesamt_st;
	double sum_sv_an;
	double sum_sv_ag;
	double netto_lohn;
	double gesamt_belast_ag;

};

extern struct user_daten* new_user_daten();