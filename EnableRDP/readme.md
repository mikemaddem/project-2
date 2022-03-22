# EnableRDP
A malicious .exe file that, when run with elevated permissions, enables RDP, and disables the Windows firewalll

- EnableRDP.cpp when compiled into an .exe is the execution technique + payload


# MITRE ATT&CK
- User Execution: Malicious File https://attack.mitre.org/techniques/T1204/002/
- Command and Scripting Interpreter: Windows Command Prompt https://attack.mitre.org/techniques/T1059/003/

- Modify Registry https://attack.mitre.org/techniques/T1112
- Remote Services: Remote Desktop Protocol https://attack.mitre.org/techniques/T1021/001/
- Impair Defenses: Disable or Modify System Firewall https://attack.mitre.org/techniques/T1562/004/

# Summary
enablerdp.exe is a malicious exe file. The file must be manually run by a user with local administror privilages on the system. It has been specially crafted in order to execute a series of powershell commands in the background. These commands enable RDP via a registry key, and disable all firewalls on the system. This implant would be used as a part of an initial phishing attack in order to gain access to a victim's system. After execution an attack could RDP into the box and pivot into more manual techniques.

# APTs
This implant employs techniques observed in real financial sectors.

Execution via malicious file is common in this field, especially as part of a phishing attack. Both Silence and Codoso groups have been known to use malicious files attached to phishing emails (Mandiant).

Many APTs in the financial sector use RDP as a form of persistence (Group IB). In addition, these groups often utilize valid accounts as a form of persistence and will create new local accounts to RDP with (Symantec). Local firewalls are dropped as a blanket technique for easily accessing the affected system.
