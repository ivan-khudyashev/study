echo "chain2 on start ERRORLEVEL = %ERRORLEVEL%"
@echo off
rem (C) Khudyashev Ivan, 2016

SETLOCAL ENABLEEXTENSIONS
rem Set script env
SET me=%~n0
SET parent=%~dp0
SET /A errno=0
rem Set  error codes
SET /A ERROR_COMMAND_NOT_FOUND = 2
echo on
echo "chain2 ERRORLEVEL = %ERRORLEVEL%"
@echo off
SET /A errno = 0

EXIT /B %errno%