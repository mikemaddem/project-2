# Taskmaster
This is a simple execution agent that will generate a stable persistence method through Window's own task scheduler. It creates a scheduled task that runs our meterpreter payload every time a user logs in. 

# ATT&CK Techniques
- Scheduled Task/Job: Scheduled Task : https://attack.mitre.org/tactics/TA0006/
- Command and Scripting Interpreter: Windows Command Shell : https://attack.mitre.org/techniques/T1059/003/
- User Execution: Malicious File : https://attack.mitre.org/techniques/T1204/002/ 

# APTs
This execution implant is based off of successful attacks that have been used against the finance industry.

Execution via malicious file remains one of the most common techniques to get access to victim's infrastructre to this day in the field. Many groups, such as Codoso and Silence, have used malicious files successfully to attack many finacial institutions. This is also the case for using the Windows Task Scheduler to enable persistence.

As for the Windows Command Shell, its usage in attacks against every industry, including finance, is extremely common, with many groups using the CMD to exploit their targets.