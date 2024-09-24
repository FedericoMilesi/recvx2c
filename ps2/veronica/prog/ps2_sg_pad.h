#pragma once

#ifndef _PS2_SG_PAD_H_
#define _PS2_SG_PAD_H_

#include <shinobi.h>

#include "types.h"

// sg_pad.h functions  
/* REDEF */ void pdInitPeripheral(Sint32 logic, void* recvbuf, void* sendbuf);
/* REDEF */ void pdExitPeripheral(); 
/* REDEF */ const PDS_PERIPHERAL* pdGetPeripheral(Uint32 port); 
/* REDEF */ const PDS_PERIPHERALINFO* pdGetPeripheralInfo(Uint32 port); 
/* REDEF */ void pdSetMode(Sint32 port);

void Ps2_pad_read();
void Ps2_Read_Key(PDS_PERIPHERAL* per, PS2_PAD_WORK* pad_wk);
void Ps2_MakeRepeatKey(unsigned int Id, PS2_PAD_WORK* pad_wk);
void Pad_set(PS2_PAD_WORK* pbt, unsigned short pad_num);
void Pad_init();

#endif // _PS2_SG_PAD_H_