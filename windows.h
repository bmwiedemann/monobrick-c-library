#ifndef included_windows_h
#define included_windows_h

#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#define Sleep(n) usleep(1000*(n))

#define BYTE  unsigned char
#define WORD  uint16_t
#define DWORD uint32_t
#define LPCSTR unsigned char *

#define GENERIC_READ 1
#define GENERIC_WRITE 2
#define OPEN_EXISTING 1

typedef FILE* HANDLE;
#define INVALID_HANDLE_VALUE NULL
#define CloseHandle(h) fclose(h)


// re-used from /usr/include/wine/windows/winbase.h
#define CBR_9600        0xFF16

typedef struct tagDCB
{
    DWORD DCBlength;
    DWORD BaudRate;
    unsigned fBinary               :1;
    unsigned fParity               :1;
    unsigned fOutxCtsFlow          :1;
    unsigned fOutxDsrFlow          :1;
    unsigned fDtrControl           :2;
    unsigned fDsrSensitivity       :1;
    unsigned fTXContinueOnXoff     :1;
    unsigned fOutX                 :1;
    unsigned fInX                  :1;
    unsigned fErrorChar            :1;
    unsigned fNull                 :1;
    unsigned fRtsControl           :2;
    unsigned fAbortOnError         :1;
    unsigned fDummy2               :17;
    WORD wReserved;
    WORD XonLim;
    WORD XoffLim;
    BYTE ByteSize;
    BYTE Parity;
    BYTE StopBits;
    char XonChar;
    char XoffChar;
    char ErrorChar;
    char EofChar;
    char EvtChar;
    WORD wReserved1;
} DCB, *LPDCB;

typedef struct tagCOMMTIMEOUTS {
        DWORD   ReadIntervalTimeout;
        DWORD   ReadTotalTimeoutMultiplier;
        DWORD   ReadTotalTimeoutConstant;
        DWORD   WriteTotalTimeoutMultiplier;
        DWORD   WriteTotalTimeoutConstant;
} COMMTIMEOUTS,*LPCOMMTIMEOUTS;

#define SetCommTimeouts(h,t) /*FIXME*/
#define SetCommState(h,dcb)  /*FIXME*/

#endif
