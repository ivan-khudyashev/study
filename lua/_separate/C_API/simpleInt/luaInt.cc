#include <cstring>
#include <cstdio>
#include <iostream>
#include "lua.hpp"

int main(int argc, char** argv) {
    char buffer[256];
    int error;
    lua_State *L = luaL_newstate(); // opens Lua
    luaL_openlibs(L); //opens the standard libraries

    while(fgets(buffer, sizeof(buffer), stdin) != NULL) {
        error = luaL_loadbuffer(L, buffer, strlen(buffer), "line") ||
                lua_pcall(L, 0, 0, 0);
        if(error) {
            std::cerr << lua_tostring(L, -1) << std::endl;
            lua_pop(L, 1);
        }
    }

    lua_close(L);
    return 0;
}
