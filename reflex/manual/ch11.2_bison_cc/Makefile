# INPUT params
LEXER_NAME=lexer
LEXER_CPP=lexer
FSM_CPP=lexer_fsm
PARSER_NAME=parser
PARSER_CPP=parser
CPP_EXTENSION=cpp
REFLEX_EXTENSION=l++
BISON_EXTENSION=yy
# Construct params
LEXER_CPP_FILE=${LEXER_CPP}.${CPP_EXTENSION}
FSM_CPP_FILE=${FSM_CPP}.${CPP_EXTENSION}
SRC_LEXER_FILE=${LEXER_NAME}.${REFLEX_EXTENSION}
SRC_PARSER_FILE=${PARSER_NAME}.${BISON_EXTENSION}
PARSER_CPP_FILE=${PARSER_CPP}.${CPP_EXTENSION}
# Compiler options
CC=g++
CC_LIB_DIR=/home/pt/tools/reflex/lib
CC_INC_DIR=/home/pt/tools/reflex/include
# Targets
all: lexer

lexer: genlexer genparser
	${CC} -o ${LEXER_NAME}.o -L ${CC_LIB_DIR} -I ${CC_INC_DIR} ${PARSER_CPP_FILE} ${LEXER_CPP_FILE} ${FSM_CPP_FILE} -lreflex

genlexer: ${SRC_LEXER_FILE}
	reflex --fast -m reflex -o ${LEXER_CPP_FILE} --tables-file=${FSM_CPP} --header-file=${LEXER_NAME}.h ${SRC_LEXER_FILE}

genparser:
	bison -d -o ${PARSER_CPP_FILE} ${SRC_PARSER_FILE}

clean:
	rm -rf *.cpp *.c++ *.cc
	rm -rf *.o *.out *.so *.a
	rm -rf *.h *.hpp *.hh
