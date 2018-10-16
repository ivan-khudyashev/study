#include <stdio.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

int somefunc(lua_State *L)
{
    printf("This is test output from somefunc()\n");
    return 0;
}

int luaopen_c_func(lua_State *L)
{
    static const struct luaL_Reg reg_funcs[] = {
        {"somefunc", somefunc},
        {NULL, NULL} /* sentinel */
    };
    luaL_register(L, "c_func", reg_funcs);
    return 1;
}
