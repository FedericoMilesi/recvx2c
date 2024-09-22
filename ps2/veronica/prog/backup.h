#pragma once

#ifndef _BACKUP_H_
#define _BACKUP_H_

void BupInit();
void BupExit();
void ClearInfo(int drive);
int BupComplete(int drive, int op, int stat);
int BupProgress(int drive, int op, int count, int max);
void BupInitCallback();

#endif // _BACKUP_H_