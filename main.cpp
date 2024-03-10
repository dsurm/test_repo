#include "main.h"

extern "C" DLL_EXPORT BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            // attach to process
            // return FALSE to fail DLL load
            break;

        case DLL_PROCESS_DETACH:
            // detach from process
            break;

        case DLL_THREAD_ATTACH:
            // attach to thread
            break;

        case DLL_THREAD_DETACH:
            // detach from thread
            break;
    }
    return TRUE; // succesful
}

void DLL_EXPORT dispayGroup(int number) {
    std::cout << "Group No: " << number << std::endl;
}

void DLL_EXPORT getName(char* name) {
    const char* resultName = "2b077f82bc30449156391d36d6db741b";
    strcpy(name, resultName);
}
