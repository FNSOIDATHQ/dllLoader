#include "main.h"


void APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved){
    if(fdwReason==DLL_PROCESS_ATTACH){
            //TODO: load before

            HINSTANCE originalFODll = LoadLibrary("..\\FleetOpsHook.dll");

            //after
            std::ifstream file(".\\dll\\after.list");
            std::string line;

            if (file.is_open()) {
                while (getline(file, line)) {
                    line=".\\dll\\"+line;
                    HINSTANCE singleDLL = LoadLibrary(line.c_str());
                    //line="try load dll"+line;
                    //MessageBoxA(nullptr, line.c_str(), "test", MB_OK | MB_ICONINFORMATION);
                    line.clear();
                }
                file.close();
            }
    }
}

int LowLevelKeyboardProc(){
    return 0;
}

void SetHookID(){
    return;
}
/*
wrong solution

dll.def

EXPORTS
   ?LowLevelKeyboardProc@@YGJHIJ@Z=W2kDTS.?LowLevelKeyboardProc@@YGJHIJ@Z
   ?SetHookID@@YAXPAUHHOOK__@@@Z=W2kDTS.?SetHookID@@YAXPAUHHOOK__@@@Z

*/
