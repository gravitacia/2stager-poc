#include <windows.h>
#include <stdio.h>

#define EICAR_STRING "X5O!P%@AP[4\\PZX54(P^)7CC)7}$" \
"EICAR-STANDARD-ANTIVIRUS-TEST-FILE!$H+H*"

BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD  ul_reason_for_call,
                      LPVOID lpReserved) {
    FILE *f;
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
            f = fopen("eicar.com", "w");
            if (f) {
                fprintf(f, EICAR_STRING);
                fclose(f);
            }
            break;
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}
