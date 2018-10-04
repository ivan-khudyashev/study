#!/bin/bash
# This script for compile executable/library with Lua 5.1 support
SCRIPT_LUA_VER=
SCRIPT_IS_EXIT=1
case $1 in
"5.1" )
SCRIPT_LUA_VER=$1
;;
"5.2" )
SCRIPT_LUA_VER=$1
;;
"5.3" )
SCRIPT_LUA_VER=$1
;;
* )
SCRIPT_IS_EXIT=0
;;
esac
if [[ -z $2 ]]; then
SCRIPT_IS_EXIT=0
fi
if [[ ${SCRIPT_IS_EXIT} -eq 0 ]] ; then
echo "usage: compileWithLua.sh LUA_VERSION FILE_NAME_WITHOUT_EXT"
echo "  where LUA_VERSION in \"5.1\", \"5.2\", \"5.3\""
echo "  where FILE_NAME_WITHOUT_EXT - name of c-file for compile, e.g if file 'myprog.c' then name 'myprog'"
exit 1
fi
g++ -I /usr/include/lua/${SCRIPT_LUA_VER}/ -L /usr/lib/lua/${SCRIPT_LUA_VER}/ -o $2.o -l lua${SCRIPT_LUA_VER} -ldl $2.cc
export LD_LIBRARY_PATH=:/usr/lib/lua/${SCRIPT_LUA_VER}
echo ${LD_LIBRARY_PATH}
