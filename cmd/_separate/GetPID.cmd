@ echo off

rem Note: Session Name for privileged Administrative consoles is sometimes blank.
if not defined SESSIONNAME set SESSIONNAME=Console

setlocal

rem Instance Set
set instance=%DATE% %TIME% %RANDOM%
echo Instance: "%instance%"
title %instance%

rem PID Find
for /f "usebackq tokens=2" %%a in (`tasklist /FO list /FI "SESSIONNAME eq %SESSIONNAME%" /FI "USERNAME eq %USERNAME%" /FI "WINDOWTITLE eq %instance%" ^| find /i "PID:"`) do set PID=%%a
if not defined PID for /f "usebackq tokens=2" %%a in (`tasklist /FO list /FI "SESSIONNAME eq %SESSIONNAME%" /FI "USERNAME eq %USERNAME%" /FI "WINDOWTITLE eq Administrator:  %instance%" ^| find /i "PID:"`) do set PID=%%a
if not defined PID echo !Error: Could not determine the Process ID of the current script.  Exiting.& exit /b 1

rem Current Task Show
echo PID: "%PID%"