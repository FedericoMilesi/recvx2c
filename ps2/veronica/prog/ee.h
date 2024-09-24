#define ExitHandler() asm (sync; ei)


typedef struct sceSifClientData sceSifClientData;

int iWakeupThread(int thid);
int GetThreadId(void);
int SleepThread(void);
int SetAlarm(unsigned short hsync, AlarmCallBack wait_alarm, void* thid); 

int sceSifBindRpc(sceSifClientData * client, int rpc_number, int mode);