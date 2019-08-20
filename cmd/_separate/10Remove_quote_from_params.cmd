:: (C) Khudyashev Ivan, 2019
@echo off

SETLOCAL ENABLEEXTENSIONS ENABLEDELAYEDEXPANSION
:: Set script env
SET me=%~n0
SET parent=%~dp0
SET /A errno=0
:: Set  error codes
SET /A ERROR_COMMAND_NOT_FOUND=2

set param_str=%*
set param_str=%param_str:"=\"%
echo bash -c "g++-linux-4.1 %param_str%"

::set param_str=
::set cur_str=

::for %%i in (%*) do (set cur_str=%%i & set param_str=!param_str! !cur_str:"=\"!)
::echo bash --verbose -c "g++-linux-4.1 !param_str!"

EXIT /B %errno%