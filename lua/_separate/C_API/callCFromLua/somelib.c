#include "somelib.h"

int dfunc(lua_State *L) {
    double d = luaL_checknumber(L, 1);
    lua_pushnumber(L, d * 2);
    return 1;
}

void func1() {
    int a;
    printf("func1()\n");
}

int func2() {
    int a = 111;
    return a % 22;
}

int func3(int b) {
    int a = b << 2;
    return a % 11;
}

int luaopen_mylib(lua_State *L) {
    static const struct luaL_Reg reg_func [] = {
        {"dfunc", dfunc},
        {NULL, NULL} /* sentinel */
    };
    luaL_register(L, "mylib", reg_func);
    return 1;
}
