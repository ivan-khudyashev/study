:: (C) Khudyashev Ivan, 2019
:: Output paramters for cmd.exe
@set idx=1
@for %%p in (%*) do @(echo %idx%: %%p
set a idx+=1 )