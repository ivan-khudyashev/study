rockspec_format = "3.0"
package = "TestRock"
version = "0.1.0-1"
source = {
    -- url = "file:///home/ivan/study/lua/_separate/LuaRocks/TestRock/",
    url = "",
    tag = "v1.0"
}
description = {
    summary = "Test rock",
    detailed = "This rock is used for defining how to use C++ lib together with lua-package",
    license = "PROPRIETARY PT LICENSE",
    homepage = "http://127.0.0.1/testrock",
    maintainer = "Khudyashev Ivan <bahek1983@gmail.com>",
    labels = {"test", "clib", "c++lib"}
}
supported_platforms = {"linux", "unix"}
dependencies = {
    "lua 5.1"
}
build = {
    type = "cpp",
    myrock = "myrock.lua",
    modules = {
        cpp_func = {
            sources = {
                "cpp_func.cc"
            }
        }
    }
}
