#define ExitHandler() asm (sync; ei)

typedef	void (*AlarmCallBack)(int, unsigned short, void*);

typedef struct _sif_client_data sceSifClientData;

int iWakeupThread(int thid);
int GetThreadId(void);
int SleepThread(void);
int SetAlarm(unsigned short hsync, AlarmCallBack wait_alarm, void* thid); 

int sceSifBindRpc(sceSifClientData * client, int rpc_number, int mode);