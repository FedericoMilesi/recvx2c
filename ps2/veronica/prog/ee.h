#define ExitHandler() asm (sync; ei)

int iWakeupThread(int thid);