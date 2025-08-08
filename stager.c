#include <windows.h>
#include <stdio.h>

int main() {
    HMODULE hMod = LoadLibraryA("eicar.dll");

    printf("eicar loaded.");

    return 0;
}
