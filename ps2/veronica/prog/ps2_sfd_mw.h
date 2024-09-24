#pragma once

#ifndef _PS2_SFD_MW_H_
#define _PS2_SFD_MW_H_

#include <sj.h>
#include <sg_mwply.h>
#include <sfd_mw.h>

/* sfd_mw.h */ // Sint32 mwPlyCalcWorkSofdec(Sint32 ftype, Sint32 max_bps, Sint32 max_sx, Sint32 max_sy, Sint32 nfb);
/* sfd_mw.h */ // void mwPlyExecServer();
/* sfd_mw.h */ // void mwPlyFinishSofdec();
/* sfd_mw.h */ // int mwPlyGetBright(MWPLY mwply);
/* sfd_mw.h */ // void mwPlyInitSofdec(MWS_PLY_INIT_SFD* iprm);
/* sfd_mw.h */ // void mwPlyPreInitSofdec();
/* sfd_mw.h */ // void mwPlySetDispMode(Sint32 mode, Sint32 frame, Sint32 count, Sint32 latency);
/* sfd_mw.h */ // void mwPlySetDispPos(MWPLY mwply, float lx, float ly);
/* sfd_mw.h */ // void mwPlySetFastHalfpel(MWPLY mwply, Sint32 sw);
/* sfd_mw.h */ // void mwPlyStartFrame();
/* sfd_mw.h */ // void mwPlySetDispSize(MWPLY mwply, float sx, float sy);

/* ps2_sfd_mw.h */ MWPLY ps2mwPlyCreateSofdec(char* fname);
/* ps2_sfd_mw.h */ void ps2mwPlyVsyncHndl();
/* ps2_sfd_mw.h */ void ps2mwPlyExecSvrHndl();
/* ps2_sfd_mw.h */ void ps2mwPlyDestroy();
/* ps2_sfd_mw.h */ void ps2mwPlyStartFname(char* fname);
/* ps2_sfd_mw.h */ void ps2mwPlyStop();
/* ps2_sfd_mw.h */ MWE_PLY_STAT ps2mwPlyGetStat();
/* ps2_sfd_mw.h */ void ps2mwPlyGetTime(int* ncount, int* tscale);
/* ps2_sfd_mw.h */ void ps2mwPlyPause(int sw);
/* ps2_sfd_mw.h */ void ps2mwPlySetOutVol(int vol);
/* ps2_sfd_mw.h */ int ps2mwPlyGetOutVol();
/* ps2_sfd_mw.h */ void ps2mwErrorStop();
/* ps2_sfd_mw.h */ void Setps2FuncTbl(MWPLY mwply);

#endif // _PS2_SFD_MW_H_