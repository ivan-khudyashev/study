:: (C) Khudyashev Ivan, 2019
@echo off

SETLOCAL ENABLEEXTENSIONS ENABLEDELAYEDEXPANSION
:: Set script env
SET me=%~n0
SET parent=%~dp0
SET /A errno=0
:: Set  error codes
SET /A ERROR_COMMAND_NOT_FOUND=2

:next_param
set cur_param=%1
if defined cur_param (echo %cur_param% & shift & goto next_param)

echo Finished script

EXIT /B %errno%