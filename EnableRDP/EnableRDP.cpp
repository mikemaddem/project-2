#include <iostream>
#include <string>
#include <exception>
#include <windows.h>

int main() {
    /*char location[100] = "SYSTEM\\CurrentControlSet\\Control\\Terminal Server";
    DWORD val;
    HKEY hKey;
    char argument[150];
    char kname[100] = "fDenyTSConnections";
    DWORD dataSize = sizeof(val);
    RegOpenKeyExA(HKEY_LOCAL_MACHINE, location, 0, KEY_SET_VALUE, &hKey);
    RegSetValueExA(hKey, kname, 0, REG_SZ, (LPBYTE)argument, strlen(argument + 1));
    RegCloseKey(hKey);
    */
    DWORD value = 0;
    HKEY hKey;
    RegOpenKeyEx(HKEY_LOCAL_MACHINE, L"SYSTEM\\CurrentControlSet\\Control\\Terminal Server", 0, KEY_ALL_ACCESS, &hKey);
    RegSetValueEx(hKey, TEXT("fDenyTSConnections"), 0, REG_DWORD, (const BYTE*)&value, sizeof(value));

}