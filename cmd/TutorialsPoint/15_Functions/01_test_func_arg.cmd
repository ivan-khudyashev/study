:: Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
:: Purpose: ...
:: Author: bahek1983@gmail.com
:: Revision: 2019.08 - inital version

:: Initial definition
@ECHO off
SETLOCAL ENABLEEXTENSIONS ENABLEDELAYEDEXPANSION
SET scriptName=%~n0
PUSHD "%~dp0" >NUL && SET parentDir=%CD% && POPD >NUL
SET greetingMsg=Copyright (C) Khudyashev Ivan^, 2019^, bahek1983^@gmal.com

:: Define if script invoke interactive or not
SET interactive=1
ECHO %CMDCMDLINE% | FIND /I "/c" > NUL 2>&1
if %ERRORLEVEL% == 0 SET interactive=0
:: Error's codes definition
SET /A errno=0
SET /A UNKNOWN_ERROR=1
:: other error be better if its power of 2

:: Local functions defined here
GOTO start

:Display
echo The value of parameter 1 is %1 ^( %~1 ^)
echo The value of parameter 2 is %2 ^( %~2 ^)
exit /b 0

:: ! Start BODY of main script
:start
:greeting
ECHO %greetingMsg%
call :Display "one word" "anotherWord   -"

:end
@IF "%interactive%"=="0" PAUSE
ENDLOCAL
@ECHO on
:: Can't use this command: EXIT /B %errno%
:: full description see in https://onedrive.live.com/redir?resid=D21D3AC78DEB7E86%21818311&page=View&wd=target%28General%20Notes.one%7Cb4d8eb48-f544-4155-acf8-d2f2660a41b0%2FWindows%20Command%20Script%20Return%20Codes%7C6118d4fd-a43f-4803-8613-e1b6b4d36063%2F%29
:: Or short description in here: http://steve-jansen.github.io/guides/windows-batch-scripting/part-3-return-codes.html#comment-2527273584
@cmd /c exit %errno%
