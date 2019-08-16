@Setlocal EnableDelayedExpansion
@set eol=^


@echo 1 !eol!2
@for /f "usebackq" %%i in (`echo 1!eol!2!eol!3`) do @echo %%i