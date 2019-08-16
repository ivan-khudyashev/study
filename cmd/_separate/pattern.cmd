:: (C) Khudyashev Ivan, 2016
:: @echo off

SETLOCAL ENABLEEXTENSIONS
:: Set script env
SET me=%~n0
SET parent=%~dp0
SET /A errno=0
:: Set  error codes
SET /A ERROR_COMMAND_NOT_FOUND=2

EXIT /B %errno%