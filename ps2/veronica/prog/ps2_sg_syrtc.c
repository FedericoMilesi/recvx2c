#include "types.h"

void syRtcFinish();
int syRtcGetDate(_SYS_RTC_DATE* date);
int syRtcInit();































/* empty */
void syRtcFinish() { } // Line 38, Address: 0x2ddf80





















/* 100% match */
int syRtcGetDate(_SYS_RTC_DATE* date) { // Line 61, Address: 0x2ddf90
    sceCdCLOCK get_rtc;
    int temp; // not originally outputted by dwarf2cpp

    sceCdReadClock(&get_rtc); // Line 65, Address: 0x2ddfa0
    temp = get_rtc.year % 16;
    date->year = temp + ((get_rtc.year / 16) * 10) + 2000;
    temp = get_rtc.month % 16; // Line 68, Address: 0x2ddfa8
    date->month = temp + ((get_rtc.month / 16) * 10); // Line 69, Address: 0x2ddfdc
    temp = get_rtc.day % 16; // Line 70, Address: 0x2de00c
    date->day = temp + ((get_rtc.day / 16) * 10); // Line 71, Address: 0x2de03c
    temp = get_rtc.hour % 16; // Line 72, Address: 0x2de06c
    date->hour = temp + ((get_rtc.hour / 16) * 10); // Line 73, Address: 0x2de09c
    temp = get_rtc.minute % 16;
    date->minute = temp + ((get_rtc.minute / 16) * 10);
    temp = get_rtc.second % 16; // Line 76, Address: 0x2de0cc
    date->second = temp + ((get_rtc.second / 16) * 10); // Line 77, Address: 0x2de0d0
    date->dayofweek = 0;
    date->ageofmoon = 0; // Line 79, Address: 0x2de0d4
    return get_rtc.stat; // Line 80, Address: 0x2de0d8
}





















/* 100% match */
int syRtcInit() { // Line 104, Address: 0x2de0f0
    return 0;
}
