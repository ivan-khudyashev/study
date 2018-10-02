cmake_minimum_required(VERSION 2.8)
project(cppparsertest)
set(SOURCE_EXE 
    main.cc mydriver.cc hGrammarParser.cc hGrammarLexer.cc
)
find_package(BISON 3.0.4)

include_directories(${CMAKE_CURRENT_BINARY_DIR}/..)
add_executable(testparser ${SOURCE_EXE})

add_custom_command(
    OUTPUT hGrammarLexer.cc
    COMMAND flex -o hGrammarLexer.cc ${CMAKE_CURRENT_SOURCE_DIR}/hGrammar.flex
    COMMENT "generating lexer..."
    VERBATIM
)
add_custom_target(
    lexer testparser
    DEPENDS hGrammarLexer.cc
)

add_custom_command(
    OUTPUT hGrammarParser.cc
    COMMAND bison -o hGrammarParser.cc ${CMAKE_CURRENT_SOURCE_DIR}/hGrammar.yy
    COMMENT "generating parser ..."
    VERBATIM
)
add_custom_target(
    parser testparser
    DEPENDS hGrammarParser.cc
)
