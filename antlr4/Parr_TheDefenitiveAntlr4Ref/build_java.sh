#!/usr/bin/env bash
## Define vars
ANTLR4_VER="4.7.2"
ANTLR4_JAR_FILE="/usr/local/lib/antlr-${ANTLR4_VER}-complete.jar"
if [ -z "${CLASSPATH}" ]
then
    CLASSPATH=".:${ANTLR4_JAR_FILE}"
else
    CLASSPATH=".:${CLASSPATH}:${ANTLR4_JAR_FILE}"
fi
## Check existence
## TODO: fill section
## Define aliases
ANTLR4="java -jar ${ANTLR4_JAR_FILE}"
ANTLRJAVAC="javac -cp ${ANTLR4_JAR_FILE}"
GRUN='java -Xmx250M -cp "${CLASSPATH}" org.antlr.v4.gui.TestRig'
## Build and compile grammar
${ANTLR4} *.g4
${ANTLRJAVAC} *.java
