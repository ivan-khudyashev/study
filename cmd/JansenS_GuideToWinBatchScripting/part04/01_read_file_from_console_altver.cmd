:: Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
:: Initial definition
@ECHO off
SETLOCAL ENABLEEXTENSIONS
SET scriptName=%~n0
SET parentDir=%~dp0
SET greetingMsg=Copyright (C) Khudyashev Ivan^, 2019^, bahek1983^@gmal.com
SET filename=SaveFromConsoleFile.txt
:: Error's codes definition
SET /A errno=0
SET /A UNKNOWN_ERROR=1
:: other error be better if its power of 2
:: Local functions defined here
GOTO start
:start
:greeting
ECHO %greetingMsg%
ECHO Input content of saved (%filename%) and press Ctrl+Z when finished
COPY CON: %filename%
:end
@ECHO on
:: Can't use this command: EXIT /B %errno%
:: full description see in https://onedrive.live.com/redir?resid=D21D3AC78DEB7E86%21818311&page=View&wd=target%28General%20Notes.one%7Cb4d8eb48-f544-4155-acf8-d2f2660a41b0%2FWindows%20Command%20Script%20Return%20Codes%7C6118d4fd-a43f-4803-8613-e1b6b4d36063%2F%29
:: Or short description in here: http://steve-jansen.github.io/guides/windows-batch-scripting/part-3-return-codes.html#comment-2527273584
@cmd /c exit %errno%
