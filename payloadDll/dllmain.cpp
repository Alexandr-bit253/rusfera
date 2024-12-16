#include <Windows.h>
#include <string>
#include <iostream>

void MsgBoxPayload() {
    MessageBoxA(nullptr, "Hacking With ru-sfera.pw", "Wow!", MB_OK | MB_ICONINFORMATION);
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    switch (dwReason) {
    case DLL_PROCESS_ATTACH:
        MsgBoxPayload();
        break;

    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }

    return TRUE;
}