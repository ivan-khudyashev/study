#include <iostream>
#include <cstring>
#include <lua.hpp>

extern "C" int somefunc(lua_State *L)
{
    std::cout << "This is test output from C++  somefunc()" << std::endl;
    return 0;
}

extern "C" int luaopen_cpp_func(lua_State *L)
{
    static const struct luaL_Reg reg_funcs[] = {
        {"somefunc", somefunc},
        {NULL, NULL} /* sentinel */
    };
    luaL_register(L, "cpp_func", reg_funcs);
    return 1;
}
