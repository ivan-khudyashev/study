:: пакетный файл для построения новой сборки на текущей граматике
@ECHO off
SET /A errno=0

IF NOT "%1"=="" (
.\clear.bat & antlr4 %1Lexer.g4 & antlr4 %1Parser.g4 && antlrjavac *.java
) ELSE (
ECHO "Usage: %0 grammarName"
)

@ECHO off
EXIT /B %errno%