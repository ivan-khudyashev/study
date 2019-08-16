:: (C) Khudyashev Ivan, 2019
:: Output paramters for cmd.exe
@set idx=1
@echo off
:nextitem
if [%1] EQU [] goto end
echo Param %idx% %1
shift
set /a idx+=1
goto nextitem
:end
@echo on