rem (C) Khudyashev Ivan, 2016
@echo off

SETLOCAL ENABLEEXTENSIONS
rem Set script env
SET me=%~n0
SET parent=%~dp0
SET /A errno=0
rem Set  error codes
SET /A ERROR_COMMAND_NOT_FOUND = 2

echo "Some test" 1>tstfile 2>tstfile

EXIT /B %errno%