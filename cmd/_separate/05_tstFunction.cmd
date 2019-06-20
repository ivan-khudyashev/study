:: (C) Khudyashev Ivan, 2016
@echo off

SETLOCAL ENABLEEXTENSIONS
:: script global variables
SET me=%~n0
SET parent=%~dp0
SET log=%TEMP%\%me%.txt

:: The "main" logic of script
IF EXIST "%log%" DEL /Q %log% > NUL

:: do something cool, then log it
CALL :tee "%me%: Hello, all :)!"

ECHO errorlevel = %errorlevel%

:: force execurion to quit
EXIT /B %ERRORLEVEL%

:: a function to write to a log file and write to stdout
:tee
ECHO %* >> "%log%"
ECHO %*
exit /B 11