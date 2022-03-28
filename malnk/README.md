# Malnk
A malicious lnk file that, when run with elevated permissions, creates a new local user, enables RDP, and disables the Windows firewalll

- malnk.lnk is the execution technique + payload
- malnk.ps1 is a powershell script for easily generating/modifying the lnk file

DEMO: https://rit.zoom.us/rec/play/4QEwm-hmNDuKv9fBQKJdjOJ9nWFmKgmLTU9tEDPT4zSUy7yi-GHGMiR3xlPd3nOpUiGyVOee9mQxW3cS.31VcCD_clPP8_J5e?continueMode=true

# MITRE ATT&CK
- User Execution: Malicious File https://attack.mitre.org/techniques/T1204/002/
- Command and Scripting Interpreter: PowerShell  https://attack.mitre.org/techniques/T1059/001/

- Create Account: Local Account https://attack.mitre.org/techniques/T1136/001
- Modify Registry https://attack.mitre.org/techniques/T1112
- Remote Services: Remote Desktop Protocol https://attack.mitre.org/techniques/T1021/001/
- Impair Defenses: Disable or Modify System Firewall https://attack.mitre.org/techniques/T1562/004/

# Summary
malnk.lnk is a malicious LNK file. The file must be manually run by a user with local administror privilages on the system. It has been specially crafted in order to execute a series of powershell commands in the background. These commands create a new local user "Admimistrator", enable RDP via a registry key, and disable all firewalls on the system. This implant would eb sued as a part of an initial phishing attack in order to gain access to a victim's system. After execution an attack could RDP into the box and pivot into more manuall techniques.

# APTs
This implant employs techniques observed in real financial sectors.

Execution via malicious file is common in this field, especially as part of a phishing attack. Both Silence and Codoso groups have been known to use malicious files attached to phishing emails (Mandiant), with Silence having known usuage of malicious LNK files (Group IB). Those LNK files would launch either PowerShell or JavaScript code (Group IB).

Many APTs in the financial sector use RDP as a form of persistence (Group IB). In addition, these groups often utilize valid accounts as a form of persistence and will create new local accounts to RDP with (Symantec). Local firewalls are dropped as a blanket technique for easily accessing the affected system.

# References
- https://www.mandiant.com/resources/phished-at-the-request-of-counsel
- https://www.group-ib.com/resources/threat-research/silence_moving-into-the-darkside.pdf
- https://www.symantec.com/blogs/threat-intelligence/leafminer-espionage-middle-east
