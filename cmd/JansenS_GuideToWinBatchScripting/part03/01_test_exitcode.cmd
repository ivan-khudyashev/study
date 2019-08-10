:: Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
:: Initial definition
@echo off
SETLOCAL ENABLEEXTENSIONS
SET scriptName=%~n0
SET parentDir=%~dp0
SET greetingMsg=Copyright (C) Khudyashev Ivan^, 2019^, bahek1983^@gmal.com
:: Error's codes definition
SET /A errno=0
SET /A UNKNOWN_ERROR=1
:: other error be better if its power of 2
:: Local functions defined here
GOTO start
:start
:greeting
echo %greetingMsg%
echo Set errorlevel equal 1 and exit (apparently with return code equal to 0)
set errno=1
:end
@echo on
@EXIT /B %errno%
