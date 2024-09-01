#define ExitHandler() asm (sync; ei)

typedef	void (*AlarmCallBack)(int, unsigned short, void*);

int iWakeupThread(int thid);
int GetThreadId(void);
int SleepThread(void);
int SetAlarm(unsigned short hsync, AlarmCallBack wait_alarm, void* thid); 