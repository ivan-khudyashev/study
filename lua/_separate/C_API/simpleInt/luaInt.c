#include <stdio.h>
#include <string.h>
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"

int main(void) {
    char buffer[256];
    int error;
    lua_State *L = luaL_newstate(); // opens Lua
    luaL_openlibs(L); //opens the standard libraries

    while(fgets(buffer, sizeof(buffer), stdin) != NULL) {
        error = luaL_loadbuffer(L, buffer, strlen(buffer), "line") ||
                lua_pcall(L, 0, 0, 0);
        if(error) {
            fprintf(stderr, "%s\n", lua_tostring(L, -1));
            lua_pop(L, 1);
        }
    }

    lua_close(L);
    return 0;
}
